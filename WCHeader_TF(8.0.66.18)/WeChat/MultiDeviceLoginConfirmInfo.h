@interface MultiDeviceLoginConfirmInfo : NSObject

@property (nonatomic) BOOL showSyncChatEntrance;
@property (nonatomic) BOOL syncChat;
@property (nonatomic) BOOL showAutoLoginEntrance;
@property (nonatomic) BOOL autoLogin;

- (id)description;

@end
