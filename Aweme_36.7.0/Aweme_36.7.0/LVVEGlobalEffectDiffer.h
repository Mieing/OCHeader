@class NSDictionary;

@interface LVVEGlobalEffectDiffer : NSObject

@property (copy, nonatomic) NSDictionary *added;
@property (copy, nonatomic) NSDictionary *updated;
@property (copy, nonatomic) NSDictionary *removed;

- (void).cxx_destruct;

@end
