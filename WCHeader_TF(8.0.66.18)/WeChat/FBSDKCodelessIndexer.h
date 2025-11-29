@class NSString;

@interface FBSDKCodelessIndexer : NSObject

@property (class, readonly, copy, nonatomic) NSString *extInfo;

+ (void)enable;
+ (void)loadCodelessSettingWithCompletionBlock:(id /* block */)a0;
+ (id)requestToLoadCodelessSetup:(id)a0;
+ (BOOL)_codelessSetupTimestampIsValid:(id)a0;
+ (void)setupGesture;
+ (void)checkCodelessIndexingSession;
+ (id)currentSessionDeviceID;
+ (void)startIndexing;
+ (void)uploadIndexing;
+ (void)uploadIndexing:(id)a0;
+ (id)currentViewTree;
+ (id)recursiveCaptureTree:(id)a0;
+ (id)screenshot;
+ (id)dimensionOf:(id)a0;

@end
