@class AWELivePreviewExtendArea, NSString, UILabel, UIView;

@interface AWELivePreStreamStandardExtendLabel : UIView

@property (retain, nonatomic) AWELivePreviewExtendArea *extendData;
@property (retain, nonatomic) UILabel *needUpdateTimeLabel;
@property (retain, nonatomic) UIView *accessibilityView;
@property (copy, nonatomic) NSString *accessibilityText;

- (id)initWithExtendArea:(id)a0;
- (void)updateGoldTaskEndTimeDesc;
- (id)createPartsView:(id)a0;
- (double)realFont:(double)a0 fontShouldScale:(BOOL)a1;
- (void).cxx_destruct;

@end
