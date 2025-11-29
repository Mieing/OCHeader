@class NSError;

@interface RACErrorSignal : RACSignal

@property (readonly, nonatomic) NSError *error;

+ (id)error:(id)a0;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;

@end
