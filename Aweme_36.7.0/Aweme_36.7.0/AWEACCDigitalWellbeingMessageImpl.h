@class NSString;

@interface AWEACCDigitalWellbeingMessageImpl : NSObject <AWEDigitalWellbeingMessage, ACCDigitalWellbeingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (id)init;
- (void)dealloc;

@end
