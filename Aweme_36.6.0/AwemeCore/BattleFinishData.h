@class NSString;

@interface BattleFinishData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *imLeadText;
@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *summaryValue;
@property (nonatomic) BOOL isShowLike;

+ (id)descriptor;

@end
