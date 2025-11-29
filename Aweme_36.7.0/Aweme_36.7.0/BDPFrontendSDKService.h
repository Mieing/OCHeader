@class NSString, NSMutableArray;
@protocol BDPFrontendSDKDelegate;

@interface BDPFrontendSDKService : NSObject <BDPLocalFileUpdateMessage, BDPVersionManagerProtocol, BDPBusinessUpdateHandlerProtocol>

@property (class, weak, nonatomic) id<BDPFrontendSDKDelegate> delegate;

@property (retain, nonatomic) NSMutableArray *isForegroundArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)localLibVersionString;
+ (void)updateRelativeDataIfNeed;
+ (BOOL)hasAppInTheForeground;
+ (long long)localLibVersion;
+ (id)sharedService;

- (void)excuteBlk:(id /* block */)a0 uniqueID:(id)a1;
- (void)localFileBeginUpdate;
- (void)localFileRestoreToOriginal;
- (void)localFileRestoreAppFolderToOriginal;
- (void).cxx_destruct;
- (id)init;

@end
