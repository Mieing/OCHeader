@class NSString;

@interface AnnieSpeechRecognitionResultInfo : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL isInterIM;
@property (nonatomic) long long indexOfOneConnection;
@property (nonatomic) double confidence;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
