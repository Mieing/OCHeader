@class NSString;

@interface AffFinderCppToNativeManagerImpl : NSObject <AffFinderCppToNativeManagerBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getFinderUserName;
- (id)getMultiFinderUserNames;
- (id)getLocation:(int)a0;
- (id)getFinderCtrlInfoByKeyPath:(id)a0;
- (id)findShowInfoByPath:(id)a0;
- (id)getFinderBaseReq:(int)a0 syncScene:(int)a1 cmdId:(int)a2;
- (id)getFinderSyncClientInfo:(id)a0;
- (int)getSafeCacheTimeWithTimestamp:(double)a0;

@end
