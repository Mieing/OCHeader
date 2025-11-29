@class UINavigationController, NSString, MPVideoPageOpenParameter, UIImage, NSDate;

@interface MPLandingPageOpenParameter : MMObject <PBCoding>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *bizUserName;
@property (copy, nonatomic) NSString *bizNickname;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *digest;
@property (retain, nonatomic) NSDate *pubTime;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int subscene;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } thumbOriginRect;
@property (retain, nonatomic) UIImage *thumbImage;
@property (copy, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int funcFlag;
@property (nonatomic) unsigned int getA8KeyScene;
@property (nonatomic) unsigned int fromVCType;
@property (nonatomic) unsigned long long commentTopicId;
@property (copy, nonatomic) NSString *channelSessionId;
@property (retain, nonatomic) MPVideoPageOpenParameter *videoParam;
@property (weak, nonatomic) UINavigationController *preRenderNavigationController;
@property (copy, nonatomic) NSString *minimizationOpenBizKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_bizUserName;
+ (void)PBArrayAdd_bizNickname;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_digest;
+ (void)PBArrayAdd_pubTime;
+ (void)PBArrayAdd_itemShowType;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_subscene;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_getA8KeyScene;
+ (void)PBArrayAdd_fromVCType;
+ (void)PBArrayAdd_commentTopicId;
+ (void)PBArrayAdd_videoParam;
+ (void)PBArrayAdd_thumbUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
