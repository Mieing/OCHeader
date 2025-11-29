@class AWESearchAIGCSAMIAssistantEventConnectionInfo, NSString, AWESearchAIGCSAMIAssistantEventTTSResponse, AWESearchAIGCSAMIAssistantEventErrorInfo;

@interface AWESearchAIGCSAMIAssistantEvent : NSObject

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) AWESearchAIGCSAMIAssistantEventTTSResponse *ttsResponse;
@property (retain, nonatomic) AWESearchAIGCSAMIAssistantEventConnectionInfo *connectionInfo;
@property (retain, nonatomic) AWESearchAIGCSAMIAssistantEventErrorInfo *errorInfo;

- (void)configWithBlock:(id)a0;
- (long long)eventTypeWithSAMICoreEventType:(long long)a0;
- (id)initWithEventType:(long long)a0 taskID:(id)a1;
- (id)initWithSAMICoreEventType:(long long)a0 withBlock:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
