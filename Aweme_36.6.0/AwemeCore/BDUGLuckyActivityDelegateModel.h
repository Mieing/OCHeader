@class NSDictionary, NSMutableDictionary;
@protocol BDUGLuckyActivityDelegateProtocol;

@interface BDUGLuckyActivityDelegateModel : NSObject

@property (copy, nonatomic) NSMutableDictionary *activitiesDictData;
@property (weak, nonatomic) id<BDUGLuckyActivityDelegateProtocol> delegate;
@property (readonly, copy, nonatomic) NSDictionary *activitiesDict;

- (void)addActivityName:(id)a0 beforeActivityEnterTime:(long long)a1;
- (BOOL)containsActivityName:(id)a0 delegateKey:(id)a1;
- (BOOL)containsActivityName:(id)a0;
- (void).cxx_destruct;

@end
