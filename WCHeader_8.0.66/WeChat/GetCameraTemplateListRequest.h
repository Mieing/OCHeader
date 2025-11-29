@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface GetCameraTemplateListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int wevisionSdkVersion;
@property (retain, nonatomic) NSData *pageBuffer;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) NSString *fromTplId;
@property (nonatomic) unsigned long long eventTopicId;
@property (nonatomic) BOOL forceTestEnv;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (retain, nonatomic) NSString *songId;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned long long tabId;

+ (void)initialize;

@end
