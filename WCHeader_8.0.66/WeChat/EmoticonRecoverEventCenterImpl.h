@class NSString;

@interface EmoticonRecoverEventCenterImpl : NSObject <EmoticonRecoverEventCenterBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)onEmoticonRecoverLogicFinishedAsync:(unsigned long long)a0 type:(int)a1;
- (void)onEmoticonRecoverLogicFailedAsync:(unsigned long long)a0 type:(int)a1;
- (void)onEmoticonRecoverLogicDownloadedSingleEmoticonAsync:(unsigned long long)a0 type:(int)a1;
- (void)onEmoticonRecoverLogicFinishedPartSyncAsync:(unsigned long long)a0 type:(int)a1;
- (void)onEmoticonRecoverLogicNotifyDownloadProgressAsync:(unsigned long long)a0 type:(int)a1;

@end
