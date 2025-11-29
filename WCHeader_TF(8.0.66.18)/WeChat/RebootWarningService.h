@class NSString;

@interface RebootWarningService : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)getTimeElapsedSinceLastAlertAppears;
- (void)setTimeWhenAlertAppears;
- (void)resetTimeOfWhenAlertAppears;
- (BOOL)shouldShowAlert;
- (void)showAlertWithID:(int)a0 Key:(int)a1 Value:(int)a2 IsImportant:(BOOL)a3;
- (BOOL)tryToShowAlertWithID:(int)a0 Key:(int)a1 Value:(int)a2 IsImportant:(BOOL)a3;

@end
