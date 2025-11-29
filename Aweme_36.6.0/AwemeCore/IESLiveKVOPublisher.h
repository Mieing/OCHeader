@class NSString, NSMutableArray, NSObject;

@interface IESLiveKVOPublisher : IESLivePublisher

@property (weak, nonatomic) NSObject *target;
@property (weak, nonatomic) NSObject *observer;
@property (copy, nonatomic) NSString *keyPath;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSMutableArray *allRootSubscriptions;
@property (nonatomic) BOOL isAutoUnBind;

- (void)subscribe:(id)a0 bindingToSubscription:(id)a1;
- (id)initWithTarget:(id)a0 observer:(id)a1 keyPath:(id)a2 options:(unsigned long long)a3 autoUnBind:(BOOL)a4;
- (void).cxx_destruct;

@end
