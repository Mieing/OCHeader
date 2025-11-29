@class NSString, NSArray;

@interface WARunningModeParameter : NSObject

@property (copy, nonatomic) NSString *chatToolMode;
@property (copy, nonatomic) NSString *chatToolUsername;
@property (copy, nonatomic) NSArray *chatToolMultiChatRoomInfo;
@property (retain, nonatomic) NSArray *chatToolMaterials;
@property (nonatomic) unsigned long long agentModeState;
@property (retain, nonatomic) NSString *agentSessionId;

- (BOOL)runningInChatToolSubpackage;
- (BOOL)runningInChatToolPage;
- (BOOL)runningInChatToolAllPage;
- (void).cxx_destruct;

@end
