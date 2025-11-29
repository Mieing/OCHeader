@class NSString, UILabel;

@interface AppTrackRoomMessageCellView : CommonMessageCellView <ITrackPresentExt> {
    UILabel *m_statusLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (BOOL)canOpenTrackRoom;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)OnTrackRoomMemberChange:(id)a0 withNewMemberList:(id)a1;
- (void).cxx_destruct;

@end
