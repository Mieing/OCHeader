@class NSString, NSDictionary;

@interface IESGurdFetchResourcesResult : NSObject

@property (nonatomic) BOOL succeed;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSDictionary *statusDictionary;

- (void).cxx_destruct;

@end
