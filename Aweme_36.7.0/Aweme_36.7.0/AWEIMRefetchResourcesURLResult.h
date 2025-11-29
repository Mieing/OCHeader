@class NSError, NSString, NSArray;

@interface AWEIMRefetchResourcesURLResult : NSObject

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *originalUrl;
@property (nonatomic) unsigned long long resourcesType;
@property (nonatomic) unsigned long long formatType;
@property (copy, nonatomic) NSArray *urlList;

- (void).cxx_destruct;

@end
