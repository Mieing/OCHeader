@class BaseRequest, NetworkingMetaData, NSString, FinderBaseRequest, UserMediaFileAsset, FinderAigcUserDynamicParam;

@interface FinderCreateAigcTaskRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NetworkingMetaData *metaData;
@property (retain, nonatomic) NSString *cmd;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *aigcServiceId;
@property (retain, nonatomic) UserMediaFileAsset *userMediaFileAsset;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int postEnterScene;
@property (nonatomic) unsigned int commentScene;
@property (retain, nonatomic) FinderAigcUserDynamicParam *userDynamicParam;

+ (void)initialize;

@end
