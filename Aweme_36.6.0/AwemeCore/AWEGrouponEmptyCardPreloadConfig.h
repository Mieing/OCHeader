@class NSString, NSDictionary, NSNumber;

@interface AWEGrouponEmptyCardPreloadConfig : NSObject

@property (nonatomic) BOOL launchEnabled;
@property (nonatomic) BOOL grouponEnabled;
@property (nonatomic) double preloadInterval;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSNumber *transformerCardCacheCount;
@property (retain, nonatomic) NSNumber *feedCardCacheCount;

- (void).cxx_destruct;

@end
