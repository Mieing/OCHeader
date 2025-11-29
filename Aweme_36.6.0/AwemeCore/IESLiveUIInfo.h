@class NSMutableDictionary;

@interface IESLiveUIInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *observerDict;
@property long long applicationState;

+ (id)sharedUIInfo;

- (void)onAppLifeCyleChange;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeObservers;

@end
