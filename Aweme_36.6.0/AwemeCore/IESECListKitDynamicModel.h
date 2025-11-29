@class NSDictionary, NSArray;

@interface IESECListKitDynamicModel : NSObject

@property (copy, nonatomic) NSDictionary *cachedResponse;
@property (copy, nonatomic) NSDictionary *cachedErrorResponse;
@property (copy, nonatomic) NSDictionary *allParamsFromClient;
@property (copy, nonatomic) NSDictionary *dynamicParams;
@property (copy, nonatomic) NSArray *responseNeedCallback;

- (void).cxx_destruct;

@end
