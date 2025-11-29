@class NSMutableArray;

@interface BrandMsgResortContext : NSObject

@property (nonatomic) unsigned int maxGroupId;
@property (nonatomic) unsigned int limitMaxWeight;
@property (nonatomic) unsigned long long limitMaxSequenceId;
@property (retain, nonatomic) NSMutableArray *arrContextItem;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
