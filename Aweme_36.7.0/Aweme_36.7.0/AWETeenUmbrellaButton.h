@class NSString, UIImageView, UILabel, UIView;

@interface AWETeenUmbrellaButton : UIView <AWETeenUserMessage>

@property (retain, nonatomic) UIView *viewMask;
@property (retain, nonatomic) UIImageView *umbrellaImage;
@property (retain, nonatomic) UILabel *ageLabel;
@property (nonatomic) double buttonHeight;
@property (nonatomic) BOOL isShowingGuide;
@property (copy, nonatomic) id /* block */ umbrellaClickBlock;
@property (copy, nonatomic) id /* block */ willShowGuideBlock;
@property (copy, nonatomic) id /* block */ didShowGuideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTheme:(BOOL)a0;
- (void)p_addGesture;
- (void)p_setupViews;
- (void)didFinishUpdateMinorAwemeUser;
- (void)updateAge;
- (void)showUmbrellaButtonGuideIfNeeded;
- (double)p_calculateAgeLabelWidth;
- (id)p_ageString;
- (void)p_calculateViewsLayout;
- (void)p_umbrellaClicked;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
