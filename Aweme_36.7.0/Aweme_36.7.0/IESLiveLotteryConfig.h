@class NSDictionary;

@interface IESLiveLotteryConfig : NSObject

@property (retain, nonatomic) NSDictionary *iconConfig;
@property (retain, nonatomic) NSDictionary *tempStateConfig;
@property (retain, nonatomic) NSDictionary *schema;
@property (readonly, nonatomic) long long lotteryType;

- (id)iconText;
- (void)updateConfigWithDictionary:(id)a0;
- (id)bigCardImage;
- (id)smallCardImage;
- (BOOL)anchorIconDismiss;
- (id)doingTextTitle;
- (id)doingTextDesc;
- (id)doneTextTitle;
- (id)doneTextDesc;
- (id)audienceHomeSchema;
- (id)audienceResultWinSchema;
- (id)audienceResultFailSchema;
- (id)anchorDetailSchema;
- (id)anchorResultSchema;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
