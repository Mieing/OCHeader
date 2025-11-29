@class NSString, NSArray;

@interface ACCRepoGlobalVoiceChangerModel : ACCRepositoryGlobalCommonModel <AWERepositoryDraftProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *referenceVoiceFilterIDList;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)p_jsonStringEncoded:(id)a0;
- (id)acc_publishTrackEventParams:(id)a0;
- (id)voiceEffectIDs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
