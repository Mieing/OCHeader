@class NSString;

@interface IUdrBizFeature : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getProjectId;
- (id)getProjectIdList;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcess:(id)a0;
- (void)haveSpecifiedResource:(id)a0 name:(id)a1 version:(unsigned int)a2 errNo:(int)a3 errCode:(int)a4;
- (void)hasBeenCleared:(id)a0;

@end
