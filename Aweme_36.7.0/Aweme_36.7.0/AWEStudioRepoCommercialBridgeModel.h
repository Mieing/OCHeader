@class NSString, AWEStudioVideoPublishExtraModel, NSData;
@protocol ACCPublishRepository;

@interface AWEStudioRepoCommercialBridgeModel : NSObject <ACCRepositoryRequestParamsDeprecated, ACCRepositoryDraftContextDeprecated, AWERepositoryDraftProtocol, ACCRepositoryContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEStudioVideoPublishExtraModel *ironManExtraModel;
@property (copy, nonatomic) NSString *ccVid;
@property (copy, nonatomic) NSString *douplusDraftID;
@property (retain, nonatomic) NSData *ironManExtraJson;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
