@class NSString;
@protocol RxInjector;

@interface __RTVFeedShareControlButtonGenerator : NSObject <RTVFeedShareControlButtonGenerator>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buttonWithActionType:(unsigned long long)a0 imageName:(id)a1;
- (void).cxx_destruct;

@end
