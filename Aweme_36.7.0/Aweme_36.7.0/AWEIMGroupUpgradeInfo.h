@class NSArray, IESIMGroupHintNoticeModel, IESIMGroupConfirmPageConfig;

@interface AWEIMGroupUpgradeInfo : AWEBaseApiModel

@property (retain, nonatomic) NSArray *taskList;
@property (retain, nonatomic) IESIMGroupHintNoticeModel *taskHintNoticeModel;
@property (retain, nonatomic) IESIMGroupHintNoticeModel *nextStepNoticeModel;
@property (retain, nonatomic) IESIMGroupHintNoticeModel *confirmUpgradeNoticeModel;
@property (nonatomic) BOOL isReachGroupCountLimit;
@property (retain, nonatomic) IESIMGroupConfirmPageConfig *confirmPageConfig;

+ (id)taskListJSONTransformer;
+ (id)taskHintNoticeModelJSONTransformer;
+ (id)nextStepNoticeModelJSONTransformer;
+ (id)confirmUpgradeNoticeModelJSONTransformer;
+ (id)confirmPageConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
