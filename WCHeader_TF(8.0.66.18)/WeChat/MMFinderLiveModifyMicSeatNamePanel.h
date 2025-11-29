@class MMFinderLiveConnectMicSeatBaseInfo, NSString, MMUITextField, UIButton;
@protocol MMFinderLiveModifyMicSeatNamePanelDelegate;

@interface MMFinderLiveModifyMicSeatNamePanel : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, UITextFieldDelegate>

@property (copy, nonatomic) NSString *originalSeatName;
@property (nonatomic) unsigned long long seatId;
@property (retain, nonatomic) MMFinderLiveConnectMicSeatBaseInfo *micSeatBaseInfo;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) MMUITextField *textField;
@property (weak, nonatomic) id<MMFinderLiveModifyMicSeatNamePanelDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 seatBaseInfo:(id)a1;
- (void)layoutSubviews;
- (void)configPageSheetAndDetailView;
- (void)layoutTextField;
- (void)onTextFieldHideKeyBoard;
- (void)onTextFieldChanged:(id)a0;
- (BOOL)checkIsSeatNameChanged;
- (void)pageSheetWillAppear;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
