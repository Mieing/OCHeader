@class NSString;

@interface AWETeenModeEnableObserver : NSObject <AWEDigitalWellbeingMessage>

@property (copy, nonatomic) id /* block */ dismissBackupPopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)registDismissBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
