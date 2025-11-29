@class NSString;

@interface IamBizPreloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) unsigned int itemShowType;
@property (retain, nonatomic) NSString *sourceUsername;

+ (void)initialize;

@end
