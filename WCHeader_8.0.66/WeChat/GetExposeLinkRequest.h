@class NSString;

@interface GetExposeLinkRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *exposeUserName;
@property (retain, nonatomic) NSString *exposeDetail;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) unsigned int typeId;

+ (void)initialize;

@end
