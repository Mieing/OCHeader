@class NSString, MMListenJumpInfo;

@interface MMListenRecommendNewDesc : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int showUserNum;
@property (nonatomic) int descColorType;
@property (retain, nonatomic) NSString *descLightColor;
@property (retain, nonatomic) NSString *descDarkColor;
@property (retain, nonatomic) MMListenJumpInfo *jumpInfo;

+ (void)initialize;

@end
