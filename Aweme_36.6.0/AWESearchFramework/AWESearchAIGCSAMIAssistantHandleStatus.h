@interface AWESearchAIGCSAMIAssistantHandleStatus : NSObject

@property (nonatomic) BOOL isHandleCreated;
@property (nonatomic) BOOL isConnectRequested;
@property (nonatomic) long long connectState;
@property (nonatomic) long long taskStatus;
@property (nonatomic) long long sessionStatus;
@property (nonatomic) long long ttsStatus;

- (id)init;

@end
