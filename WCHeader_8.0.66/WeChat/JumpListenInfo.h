@class NSData;

@interface JumpListenInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL jumpListen;
@property (retain, nonatomic) NSData *listenBypassInfo;

+ (void)initialize;

- (void)setListenBypassInfo:(id)a0;
- (id)listenBypassInfo;
- (void)setJumpListen:(BOOL)a0;
- (BOOL)jumpListen;

@end
