@class NSString;

@interface ACCRepoEditElementBindInfoGetterImpl : ACCUseCase <ACCRepoEditElementBindInfoGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)propId;
- (id)musicIdForOpenCreation;
- (id)musicIdForMusicStory;
- (id)p_ulikeUploadInfo;
- (id)followShootMusicId;
- (id)followShootPropId;
- (id)ulikeLooksId;
- (id)ulikeFilterId;
- (id)musicIdForSchema;
- (id)templateId;

@end
