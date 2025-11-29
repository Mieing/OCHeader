@class NSMutableDictionary;

@interface AWECommonSurveyRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *surveyRecordDict;

- (BOOL)hasRecorded:(id)a0;
- (void)addRecord:(id)a0;
- (void).cxx_destruct;

@end
