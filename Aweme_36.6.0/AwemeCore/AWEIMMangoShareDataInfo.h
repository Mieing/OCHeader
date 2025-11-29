@class NSArray, NSNumber;

@interface AWEIMMangoShareDataInfo : NSObject

@property (nonatomic) long long dataType;
@property (retain, nonatomic) NSArray *groupTypeBlockList;
@property (retain, nonatomic) NSNumber *minGroupMemberCount;
@property (retain, nonatomic) NSNumber *maxGroupMemberCount;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
