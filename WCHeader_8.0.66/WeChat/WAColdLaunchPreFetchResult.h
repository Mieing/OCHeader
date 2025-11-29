@class NSString;

@interface WAColdLaunchPreFetchResult : NSObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned int fetchType;
@property (nonatomic) BOOL ret;
@property (copy, nonatomic) NSString *fetchData;

- (id)safeGetFetchData;
- (void).cxx_destruct;

@end
