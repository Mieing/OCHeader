@class NSString;

@interface AWEStudioRepoOpenShareModel : NSObject <ACCRepositoryRequestParamsDeprecated, ACCRepositoryPublishContextProtocol, AWERepositoryDraftProtocol, AWERepoOpenShareModelProtocol, AWERepositoryDraftProtocol, ACCRepositoryPublishContextProtocol, ACCRepositoryRequestParamsDeprecated, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *openPlatformExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *openPlatformShareID;
@property (copy, nonatomic) NSString *openPlatformExtra;
@property (copy, nonatomic) NSString *openPlatformKey;
@property (copy, nonatomic) NSString *openPlatformContent;

- (id)acc_publishRequestParams:(id)a0;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)configOpenShareDataFrom:(id)a0;
- (void)configModelForQuikStoryBeforePublish:(id)a0;
- (void)configModelForQuikStoryBeforePublish:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
