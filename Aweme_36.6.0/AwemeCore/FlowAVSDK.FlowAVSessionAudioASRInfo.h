@class NSString;

@interface FlowAVSDK.FlowAVSessionAudioASRInfo : NSObject {
    void /* function */ questionID;
    void /* function */ asrTaskID;
}

@property (nonatomic, copy) NSString *questionID;
@property (nonatomic, copy) NSString *asrTaskID;
@property (nonatomic) unsigned long long roundID;

- (id)initWithQuestionID:(id)a0 asrTaskID:(id)a1 roundID:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
