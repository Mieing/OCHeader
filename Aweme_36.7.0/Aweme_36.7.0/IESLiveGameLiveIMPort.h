@class NSString;

@interface IESLiveGameLiveIMPort : NSObject <IESLiveToolbarComponentHandler, IESLiveAAIGamePortDelegate>

@property (nonatomic) long long stampToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ throwPacketBlock;

- (id)initWithDIContext:(id)a0;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)toolbarComponentUpdate:(id)a0;
- (void)updateEntranceInfo:(id)a0 isFromUpdate:(BOOL)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)_handleEnterRoomExtra:(id)a0 isFromUpdate:(BOOL)a1;
- (void)_handleIMExtra:(id)a0;
- (void)_handleAudienceEntranceMessage:(id)a0;
- (void).cxx_destruct;
- (void)reloadIfNeeded;

@end
