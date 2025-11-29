@class FinderLiveProductQuestionCard_AskExplanationCardInfo, NSString, FinderLiveProductQuestionCard_ExplanationInfo, FinderLiveProductQuestionCard_QuestionCardInfo;

@interface FinderLiveProductQuestionCard : WXPBGeneratedMessage

@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) FinderLiveProductQuestionCard_QuestionCardInfo *questionCardInfo;
@property (retain, nonatomic) FinderLiveProductQuestionCard_AskExplanationCardInfo *askExplanationCardInfo;
@property (nonatomic) unsigned long long displayTime;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *productName;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) FinderLiveProductQuestionCard_ExplanationInfo *explanttionInfo;

+ (void)initialize;

@end
