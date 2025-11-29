@class NSString;

@interface CaraAppleApp : NSObject <CaraNativeAppBase, MMResourceMgrExt>

@property BOOL isForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)documentUser;
- (void)reportKV:(int)a0 content:(id)a1;
- (double)serverNow;
- (id)exptValue:(id)a0;
- (struct optional<NSData *> { union { char x0; id x1; } x0; BOOL x1; })packageServerData:(int)a0;
- (void)onResHasNewWithResType:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2;
- (void)onResBeginDownloadWithResType:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2;
- (void)onResFinishDownload:(BOOL)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2 version:(unsigned int)a3;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onResDeleteFinishWithResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; })kitchenBoolValue:(id)a0;
- (struct optional<int> { union { char x0; int x1; } x0; BOOL x1; })kitchenIntValue:(id)a0;
- (struct optional<float> { union { char x0; float x1; } x0; BOOL x1; })kitchenFloatValue:(id)a0;
- (struct optional<NSString *> { union { char x0; id x1; } x0; BOOL x1; })kitchenStringValue:(id)a0;
- (BOOL)isDebugging;

@end
