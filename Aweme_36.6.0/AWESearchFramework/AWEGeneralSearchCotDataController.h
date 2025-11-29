@class NSString, NSDictionary;

@interface AWEGeneralSearchCotDataController : AWESearchVerticalDataController

@property (nonatomic) BOOL isTypingFinished;
@property (retain, nonatomic) NSString *typingInfo;
@property (retain, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) NSString *aiGuidePageToGsData;
@property (retain, nonatomic) NSString *aiGuideCardType;

- (Class)customResponseClass;
- (void)customReplacePredictContentWithResponse:(id)a0;
- (void)customAppendMoreContentWithResponse:(id)a0;
- (void)p_generateActuralCardArrayForResponseModel:(id)a0;
- (void).cxx_destruct;

@end
