@class NSString, MemoryMappedKV;

@interface SourceImgInfoManager : MMUserService <MMServiceProtocol> {
    MemoryMappedKV *_sourceInfoKv;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)SetSourceImgInfo:(id)a0 imgInfo:(id)a1;
- (id)GetSourceImgInfo:(id)a0;
- (void)Report:(id)a0 actionID:(int)a1;
- (void)report28466:(int)a0 contentId:(id)a1 shareScene:(int)a2 appId:(id)a3 fromUin:(unsigned int)a4 shareId:(id)a5 actionId:(int)a6 shareType:(int)a7 ssid:(int)a8 url:(id)a9;
- (void).cxx_destruct;

@end
