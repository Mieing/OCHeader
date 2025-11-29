@class NSError;

@interface SearchCachalotViewCallbackParams : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long insertCount;
@property (nonatomic) long long totalCount;

- (void).cxx_destruct;

@end
