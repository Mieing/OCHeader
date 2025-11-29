@class NSString;
@protocol WCPlayerCoreAdapterDelegate;

@interface WCPlayerCoreAdapter : NSObject <TPLogDelegate>

@property (weak) id<WCPlayerCoreAdapterDelegate> delegate;
@property (nonatomic) BOOL openPlayerLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)SetupWithDelegate:(id)a0;
+ (id)SharedInstance;
+ (void)makeSureLocalServiceActiveWithCompletion:(id /* block */)a0;

@end
