@protocol NSCopying;

@interface RACGroupedSignal : RACSubject

@property (copy, nonatomic) id<NSCopying> key;

+ (id)signalWithKey:(id)a0;

- (void).cxx_destruct;

@end
