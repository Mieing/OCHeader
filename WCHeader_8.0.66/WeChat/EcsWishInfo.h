@class NSString, EcsWishImgInfo;

@interface EcsWishInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *wishmessage;
@property (retain, nonatomic) EcsWishImgInfo *wishImgInfo;
@property (nonatomic) unsigned int ugcTextCheckResult;
@property (retain, nonatomic) NSString *originWishmessage;

+ (void)initialize;

@end
