@class NSArray, NSNumber, NSString;

@interface AWESearchUtilityFetchHistoryContext : NSObject

@property (copy, nonatomic) NSArray *includeTypeList;
@property (copy, nonatomic) NSArray *excludeTypeList;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSNumber *number;
@property (retain, nonatomic) NSNumber *offset;
@property (nonatomic) long long responseHistoryType;
@property (copy, nonatomic) NSString *historyKey;
@property (copy, nonatomic) NSArray *excludeSourceList;

- (void).cxx_destruct;

@end
