@class NSMutableSet;

@interface VoiceAutoTransReporter : NSObject

@property (nonatomic) unsigned int userScollCount;
@property (retain, nonatomic) NSMutableSet *voiceIds;
@property (nonatomic) int transEndType;

- (id)init;
- (void)userDidScroll;
- (void)addVoiceIdWithMsg:(id)a0;
- (void)report;
- (void).cxx_destruct;

@end
