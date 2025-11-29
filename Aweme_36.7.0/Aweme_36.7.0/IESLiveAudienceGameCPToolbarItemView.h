@class NSMutableDictionary, UIImageView, UIImage, NSString;
@protocol IESLiveWebPPlayer;

@interface IESLiveAudienceGameCPToolbarItemView : UIView <IESLiveAudienceGameCPToolbarItemAnimationRouter>

@property (nonatomic) unsigned long long animationType;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *iconImageView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *tinyCardImageView;
@property (retain, nonatomic) UIImage *normalIconWebp;
@property (retain, nonatomic) UIImage *normalIconOutWebp;
@property (retain, nonatomic) UIImage *normalIconBackWebp;
@property (retain, nonatomic) UIImage *tinyCardOutWebp;
@property (retain, nonatomic) UIImage *tinyCardBackWebp;
@property (retain, nonatomic) UIImage *fallbackImage;
@property (retain, nonatomic) NSMutableDictionary *animationCompletionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearStatus;
- (id)webpWithData:(id)a0;
- (BOOL)isWebpImage:(id)a0;
- (void)playCombineAnimationWithType:(unsigned long long)a0 needIconAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldStartAnimation;
- (void)playIconNormalAnimationWithCompletion:(id /* block */)a0;
- (id)initWithFallbackPNGImage:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
