@class NSString, NSMutableDictionary;

@interface AWEElementMutualExclusionStrategy : NSObject <AWEElementFilterStrategyProtocol>

@property (retain, nonatomic) NSMutableDictionary *exclusivePair;
@property (readonly, nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)activateWithContext:(id)a0;

- (id)filterElements:(id)a0 context:(id)a1 buildContext:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
