@class NSString;

@interface IESLivePrivilegeDanmakuAPIImpl : NSObject <IESLivePrivilegeDanmakuAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchPrivilegeDanmakuTabWithRoomModel:(id)a0 isNewStyle:(BOOL)a1 completion:(id /* block */)a2;

@end
