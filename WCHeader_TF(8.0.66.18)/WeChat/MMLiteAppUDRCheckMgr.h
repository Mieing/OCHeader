@class NSArray;

@interface MMLiteAppUDRCheckMgr : IUdrBizFeature

@property (copy, nonatomic) NSArray *liteAppProjectIdList;

+ (id)configCheckParameters;

- (id)getProjectId;
- (id)getProjectIdList;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcess:(id)a0;
- (void)haveSpecifiedResource:(id)a0 name:(id)a1 version:(unsigned int)a2 errNo:(int)a3 errCode:(int)a4;
- (void).cxx_destruct;

@end
