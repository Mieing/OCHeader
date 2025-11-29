@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface GetTemplateSquareRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int miaojianSdkVersion;
@property (nonatomic) unsigned int wevisionSdkVersion;
@property (retain, nonatomic) NSData *pageBuffer;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long eventTopicId;
@property (retain, nonatomic) NSString *priorityTplId;
@property (retain, nonatomic) NSString *categoryKey;
@property (retain, nonatomic) NSString *recMusicId;

+ (void)initialize;

@end
