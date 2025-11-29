@class NSArray, NSDictionary;

@interface AWEIMShareResultInfo : NSObject

@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSArray *selectList;
@property (copy, nonatomic) NSArray *sharedUIDList;
@property (copy, nonatomic) NSArray *sharedSecUIDList;
@property (copy, nonatomic) NSArray *sharedCIDList;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
