@class NSArray;

@interface VoiceRecognitionResult : NSObject

@property (copy, nonatomic) NSArray *texts;
@property (copy, nonatomic) NSArray *voiceIdSet;

+ (id)makeWithTexts:(id)a0 voiceIdSet:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
