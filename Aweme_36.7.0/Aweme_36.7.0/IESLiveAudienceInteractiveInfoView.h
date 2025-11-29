@class UIFont, IESLiveRichTextLabel;

@interface IESLiveAudienceInteractiveInfoView : UIView

@property (retain, nonatomic) IESLiveRichTextLabel *strLabel;
@property (readonly, nonatomic) BOOL useFixedTextConfig;
@property (readonly, nonatomic) UIFont *fixedTextFont;

+ (BOOL)abEnableEventInfoForAll;
+ (id)fixedStrLabelFont;
+ (id)processAttributedStringWithFixedFont:(id)a0;

- (id)waitingDesStringWithModel:(id)a0 now:(id)a1;
- (BOOL)shouldFilterEventInfo:(id)a0;
- (void)updateWithModel:(id)a0 now:(id)a1 sortStrategy:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
