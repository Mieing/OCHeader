@class NSString;

@interface AWETeenEnterTypeManager : NSObject <AWEDigitalWellbeingMessage>

@property (nonatomic) BOOL enterByModeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)registerMessage;
- (void)dealloc;

@end
