@class NSString;

@interface AWEIntelliAlbumSDKLogger : NSObject <ILALoggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)log:(id)a0 level:(unsigned long long)a1;
- (void)logDebug:(id)a0;

@end
