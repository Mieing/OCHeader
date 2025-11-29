@class UILabel;

@interface IESLivePlaybackSeekProgressText : UIView

@property (retain, nonatomic) UILabel *currentLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *divider;
@property (nonatomic) long long labelStyle;

- (void)updateWithOrientation:(BOOL)a0;
- (id)boldFontDescriptor;
- (double)getBottomGap:(id)a0;
- (void)updateWithProgress:(id)a0 duration:(id)a1;
- (id)mediumFontDescriptor;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
