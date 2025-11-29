@class NSString, NSMutableDictionary;

@interface AWEPOIAnchorMaxNumberWithUidFrequencyController : NSObject <AWEPOIAnchorFrequencyControllerProtocol>

@property (retain, nonatomic) NSString *scene;
@property (nonatomic) long long maxShowTimes;
@property (retain, nonatomic) NSMutableDictionary *countDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 scene:(id)a1;
- (BOOL)hasHitFrequencyControl:(long long)a0;
- (long long)countForKey:(id)a0 defaultValue:(long long)a1;
- (BOOL)hasHitFrequencyControl;
- (void).cxx_destruct;
- (void)count:(long long)a0;
- (void)count;
- (long long)countForKey:(id)a0;

@end
