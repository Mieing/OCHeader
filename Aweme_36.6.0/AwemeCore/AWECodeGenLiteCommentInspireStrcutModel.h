@class NSString;

@interface AWECodeGenLiteCommentInspireStrcutModel : AWEBaseDataModel

@property (nonatomic) BOOL needShow;
@property (copy, nonatomic) NSString *rewardContent;
@property (nonatomic) int rewardCnt;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
