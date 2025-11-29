@class NSString, UILabel, UIView, UIButton;

@interface ACCAlbumMultiReferenceBottomView : UIView <ACCSelectedAssetsBottomViewProtocol>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *lineSeperator;
@property (retain, nonatomic) NSString *showLawText;
@property (nonatomic) BOOL fromLora;
@property (retain, nonatomic) UIButton *customNextButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowBottomView:(BOOL)a0 hasSelectedAssets:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (void)updateText:(id)a0;
- (void)setUpView;

@end
