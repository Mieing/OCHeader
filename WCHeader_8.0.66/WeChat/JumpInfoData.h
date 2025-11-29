@class NSString, HalfScreenInfo;

@interface JumpInfoData : WXPBGeneratedMessage

@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) HalfScreenInfo *halfScreen;

+ (void)initialize;

@end
