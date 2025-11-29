@class NSString, UILabel;

@interface WNHalfScreenNoticeView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate> {
    UILabel *m_textLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNoticeContent:(id)a0;
- (id)titleForPageSheetConfirmButton;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
