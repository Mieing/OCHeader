@class NSMutableDictionary;
@protocol IESLivePlayerControllerDelegate;

@interface IESLivePlayerEffectModelManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *modelDict;
@property (weak, nonatomic) id<IESLivePlayerControllerDelegate> delegate;

+ (id)sharedInstance;

- (id)getEffectPath:(id)a0;
- (void)addEffectModel:(id)a0 effectName:(id)a1;
- (void).cxx_destruct;

@end
