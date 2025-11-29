@class NSString;

@interface FinderJumpInfoVideo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int forbidSlide;
@property (nonatomic) unsigned int scene;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
