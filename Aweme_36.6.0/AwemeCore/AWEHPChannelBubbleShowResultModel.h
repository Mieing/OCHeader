@class NSNumber, NSDictionary;

@interface AWEHPChannelBubbleShowResultModel : NSObject

@property (nonatomic) long long showResult;
@property (copy, nonatomic) NSNumber *precheckResult;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL hasEnvWaiting;

+ (id)generateResultModelWithShowResult:(long long)a0 extraInfo:(id)a1;
+ (id)generateResultModelWithShowResult:(long long)a0 errorDesc:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
