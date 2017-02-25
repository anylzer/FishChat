//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCActionSheetDelegate.h"

@class NSString, UIButton;

@interface WCPayCreditPayCardDetailInfoViewController : WCPayBaseViewController <WCActionSheetDelegate>
{
    id <WCPayCreditPayCardDetailInfoViewControllerDelegate> m_delegate;
    UIButton *m_footerButton;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onUnBind;
- (void)onOperate;
- (void)reloadNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)addExpiredSection;
- (id)getContactBankFooterView;
- (id)getTableViewHeaderView;
- (void)addEachSection;
- (id)getBillTipWording;
- (void)showBankDetailCell;
- (void)showCreditRightsCell;
- (void)showCreditCardDetailInfoCell;
- (void)showRepayCell;
- (void)showBillAmountCell;
- (void)showUpgradeCell;
- (void)makeCreditUsedCell:(id)arg1;
- (void)onClickExtCell:(id)arg1;
- (void)makeExtCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeCreditCanUseCell:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
