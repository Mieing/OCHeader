@class NSString, NSMutableDictionary;

@interface YataCombinedState : NSObject <YataState>

@property (retain, nonatomic) NSMutableDictionary *realState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subStateForKey:(id)a0;
- (void)setSubState:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToState:(id)a0;

@end
