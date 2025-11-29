@class AWESearchAIGCExaminationSummaryEntryDisplayInfoModel;

@interface AWESearchAIGCExaminationSummaryEntryConfigModel : NSObject

@property (nonatomic) BOOL shouldShowExaminationSummaryEntry;
@property (retain, nonatomic) AWESearchAIGCExaminationSummaryEntryDisplayInfoModel *displayInfo;
@property (nonatomic) long long examinationIntentQueryCount;
@property (nonatomic) BOOL isExaminationIntent;
@property (nonatomic) long long guideStyleExpandTime;
@property (nonatomic) long long guideStyleTimeInterval;
@property (nonatomic) BOOL useGuideStyle;
@property (nonatomic) long long examinationExpireTime;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
