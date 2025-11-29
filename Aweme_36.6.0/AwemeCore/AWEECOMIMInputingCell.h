@class AWEECOMIMInputSpeechTextLoadingView, NSTimer, UILabel, AWEECOMIMInputingMsgModel;

@interface AWEECOMIMInputingCell : AWEECOMIMBaseUserMsgCell

@property (retain, nonatomic) UILabel *inputingTextLabel;
@property (retain, nonatomic) AWEECOMIMInputSpeechTextLoadingView *loadingView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEECOMIMInputingMsgModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (struct CGSize { double x0; double x1; })inputingTextSize;
+ (struct CGSize { double x0; double x1; })loadingViewSize;

- (void)didCustomInit;
- (BOOL)canShowPopMenuItems;
- (id)otherDisplayTrackParams;
- (void)updateViewTimer;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
