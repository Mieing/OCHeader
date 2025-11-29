@class NSString;

@interface HTSLiveLinkmicAsrSummary : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *summary;
@property (nonatomic) int qualityLevel;
@property (nonatomic) int showState;
@property (copy, nonatomic) NSString *summaryId;
@property (copy, nonatomic) NSString *generateTimeStamp;

+ (id)descriptor;

@end
