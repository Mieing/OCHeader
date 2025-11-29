@class NSArray, NSDictionary;

@interface IESECSliceXResourceForestInterceptionConfig : NSObject

@property (readonly, copy, nonatomic) NSArray *defaultFetcherSequence;
@property (readonly, copy, nonatomic) NSDictionary *fileSpecificFetcherSequence;

+ (void)initialize;

- (id)initWithDefaultFetcherSequence:(id)a0 fileSpecificFetcherSequence:(id)a1;
- (void).cxx_destruct;

@end
