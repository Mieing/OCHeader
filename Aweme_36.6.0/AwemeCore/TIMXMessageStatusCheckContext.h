@class NSString, NSArray, NSDictionary;

@interface TIMXMessageStatusCheckContext : NSObject

@property (copy, nonatomic) NSString *dbIndex;
@property (nonatomic) unsigned long long msgIndex;
@property (nonatomic) unsigned long long statusErrorCount;
@property (retain, nonatomic) NSArray *msgs;
@property (retain, nonatomic) NSDictionary *msgRowIdDict;
@property (retain, nonatomic) NSDictionary *convShortIdDict;
@property (retain, nonatomic) NSDictionary *msgDBMaxRowIdDict;

- (void).cxx_destruct;

@end
