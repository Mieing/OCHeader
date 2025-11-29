@class UILabel, NSString, UIStackView;

@interface IESLiveVSSeekProgressText : UIView <IESLiveSeekProgressTextProtocal>

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UILabel *currentLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *divider;
@property (nonatomic) long long labelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithOrientation:(BOOL)a0;
- (id)boldFontDescriptor;
- (double)getBottomGap:(id)a0;
- (void)updateWithProgress:(id)a0 duration:(id)a1 needShadow:(BOOL)a2;
- (void)updateWithProgress:(id)a0 duration:(id)a1;
- (id)mediumFontDescriptor;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
