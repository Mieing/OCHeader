@interface FinderLiveGetProductCarouselRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int isClickFirstReq;

+ (void)initialize;

@end
