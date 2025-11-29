@class NSString, NSArray;

@interface IESIMUnavailableStateRequestContext : NSObject

@property (nonatomic) unsigned long long methodOptions;
@property (nonatomic) unsigned long long originType;
@property (nonatomic) BOOL notifyForStateUpdate;
@property (copy, nonatomic) NSString *requestSource;
@property (copy, nonatomic) NSArray *fullInfoAwemeIds;
@property (copy, nonatomic) NSArray *filteredAwemeIds;
@property (copy, nonatomic) NSArray *forceFilteredAwemeIds;

- (void).cxx_destruct;
- (id)init;

@end
