@class NSString, AWEBinding, NSMutableDictionary;

@interface LSBind : NSObject <LSBind>

@property (retain, nonatomic) AWEBinding *binding;
@property (retain, nonatomic) NSMutableDictionary *blocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)merge:(id)a0;
+ (id)combineLatest:(id)a0;

- (id)deliverOnMainThread;
- (id)bindReusableView:(id)a0;
- (id)receive:(id)a0 keyPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)removeHandler:(id /* block */)a0;
- (void)unbind;
- (void)addHandler:(id /* block */)a0;
- (id)distinctUntilChanged;
- (id)skip:(long long)a0;
- (id)observe:(id)a0 keyPath:(id)a1;

@end
