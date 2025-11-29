@class NSString, NSArray;

@interface HMDDatabaseOperationRecord : NSObject

@property (copy, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSArray *andConditions;
@property (retain, nonatomic) NSArray *orConditions;
@property (nonatomic) long long limitCount;

- (void).cxx_destruct;

@end
