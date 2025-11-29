@class NSString, AWETrackerParamsPassThroughBlock;

@interface AWETrackerDataTransmissionToken : NSObject

@property (copy, nonatomic) NSString *tokenId;
@property (nonatomic) long long currentState;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) AWETrackerParamsPassThroughBlock *blockObj;
@property (copy, nonatomic) id /* block */ cancellingBlock;

- (id)enableOverrideParams;
- (id)initWithEvent:(id)a0 withBlockObj:(id)a1 withCancellingBlock:(id /* block */)a2;
- (id)enableParamsOverrideForKey:(id)a0;
- (id)syncLifeCycleWith:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)cancel;

@end
