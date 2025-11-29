@class NSDictionary;

@interface AWEIMIncentiveChatRelationProgressSuppressionInfo : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSDictionary *rawData;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
