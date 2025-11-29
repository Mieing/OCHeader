@class NSString, NSMutableArray;

@interface AWEPlayInteractionPerformManager : NSObject <AWEPlayInteractionPerformManagerProtocol>

@property (retain, nonatomic) NSMutableArray *performOnDisplayActions;
@property (retain, nonatomic) NSMutableArray *performOnHideActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShouldPrepareForDisplay:(BOOL)a0;
- (void)p_performOnDisplay:(id /* block */)a0;
- (void)p_trackEventOnDisplay:(id)a0 params:(id)a1 needStagingFlag:(BOOL)a2;
- (void)p_performOnHide:(id /* block */)a0;
- (void)p_executePerformOnDisplayActions;
- (void)p_executePerformOnHideActions:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;

@end
