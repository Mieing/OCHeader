@class NSString;

@interface IESLivePuzzleSetup : NSObject <IESLiveLaunchTaskProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (void)execute;

- (void)setupMonitor;
- (void)excute;

@end
