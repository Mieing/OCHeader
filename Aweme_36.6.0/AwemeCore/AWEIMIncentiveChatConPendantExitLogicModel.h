@class NSString;

@interface AWEIMIncentiveChatConPendantExitLogicModel : NSObject

@property (nonatomic) double lastShowTimeStamp;
@property (nonatomic) long long showCount;
@property (copy, nonatomic) NSString *activityKey;

- (id)dictionaryRawData;
- (void)p_setupWithDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
