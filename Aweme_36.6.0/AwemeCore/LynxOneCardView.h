@class OneCard, NSString;

@interface LynxOneCardView : LynxUI <OneCardToLynxDelegate>

@property (retain, nonatomic) OneCard *oneCard;
@property (nonatomic) BOOL isHadLoad;
@property (nonatomic) double width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)__lynx_prop_config__560;
+ (id)__lynx_prop_config__671;

- (void)openSchema;
- (void)sendToLynxWithHeight:(id)a0 width:(id)a1;
- (void)schema:(id)a0 requestReset:(BOOL)a1;
- (void)setCardWidth:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
