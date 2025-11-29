@class NSString, NSMutableDictionary, NSDictionary, NSLock, AWEDTOPrepareTrackModel;
@protocol ACCWorkspaceReader, ACCRepoDataContext;

@interface ACCRepoPrepareTrackModel : NSObject <ACCRepoRegister, ACCRepoModelDraftProtocol, ACCCreationDataAccess, ACCRepoPrepareTrackData, NSCopying> {
    NSLock *m_lock;
    NSMutableDictionary *m_dynamic_params_providers;
}

@property (retain, nonatomic) AWEDTOPrepareTrackModel *DTOModel;
@property (retain, nonatomic) NSMutableDictionary *presetEventParamsCache;
@property (copy, nonatomic) NSString *shootEnterFrom;
@property (copy, nonatomic) NSDictionary *ultraCreationTrackInfo;
@property (copy, nonatomic) NSString *musicPublishFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCRepoDataContext> dataContext;
@property (weak, nonatomic) id<ACCWorkspaceReader> workspaceReader;

+ (Class)draft_DTOModelClass;
+ (id)validJSON:(id)a0;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;
+ (id)p_validJSONArray:(id)a0;
+ (id)p_validJSONDictionary:(id)a0;

- (void)setupWithParams:(id)a0;
- (void)presetParams:(id)a0 forEvent:(id)a1;
- (void)setPresetTrackParamsForEventsString:(id)a0;
- (void)presetCoreEventParams:(id)a0;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)draft_updateWithDTOModel:(id)a0 draftModel:(id)a1;
- (id)presetParamsForEvent:(id)a0;
- (id)coreEvents;
- (void)addDynamicParamsProvider:(id /* block */)a0 forEvent:(id)a1;
- (id)dynamicParamsForEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithModel:(id)a0;

@end
