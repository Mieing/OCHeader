@class NSString, WCPayTransferPhoneProtocaDetailView;
@protocol WCPayTransferPhoneProtocalHalfPageDelegate;

@interface WCPayTransferPhoneProtocalHalfPage : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) WCPayTransferPhoneProtocaDetailView *contentView;
@property (weak, nonatomic) id<WCPayTransferPhoneProtocalHalfPageDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setLinkContent:(id)a0;
- (void)setContentViewTitle:(id)a0;
- (double)getTitleLabelHeight;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (id)pageSheetContentView;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
