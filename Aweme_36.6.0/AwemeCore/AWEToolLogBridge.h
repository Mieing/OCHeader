@class NSString;

@interface AWEToolLogBridge : NSObject <IESEditorLoggerDelegate>

@property (nonatomic) BOOL disableVELog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)build;
+ (id)sharedInstance;

- (void)IESEditorlogToLocal:(id)a0 andLevel:(long long)a1;

@end
