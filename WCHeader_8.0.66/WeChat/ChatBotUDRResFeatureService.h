@interface ChatBotUDRResFeatureService : IUdrBizFeature

- (id)getProjectId;
- (id)getLocalTag;
- (id)getResIdList;
- (id)getBaseResIdList;
- (BOOL)addToPeriod;
- (void)postProcess:(id)a0;
- (BOOL)isClientVersionResExist;
- (BOOL)isBaseResExist;
- (void)checkClientVersionRes;
- (void)checkBaseRes;
- (id)getResPath;
- (void)udrPostProcess:(id)a0;

@end
