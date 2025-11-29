@class NSString, NSMutableArray;

@interface VoipOpenglesMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *m_openglesContextArray;
@property (nonatomic) BOOL isApplicationStateActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContextsApplicationStateProperty;
- (void)cleanContexts;
- (void)whenDidActive;
- (void)whenGoingToResign;
- (void)removeContextThatMarkDeleted;
- (id)requestContext;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
