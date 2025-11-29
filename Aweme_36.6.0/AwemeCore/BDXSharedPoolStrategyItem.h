@class NSString, NSNumber;

@interface BDXSharedPoolStrategyItem : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSNumber *cachedSeconds;

+ (id)itemWithUrlString:(id)a0 cachedSeconds:(id)a1;

- (void).cxx_destruct;

@end
