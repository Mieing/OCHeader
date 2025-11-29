@interface AWEFormatEnterLoadingComponent : AWEIMComponentBase <AWEConversationFormatEnterActions, AWEFormatExitRoomActions> {
    void /* unknown type, empty encoding */ didEnterRoom;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didExitFormatRoom;
- (void)hostVC_viewWillAppear;
- (void)didUpdateFormatRoom:(id)a0;
- (void)getFormatRoomInfoFailedWithError:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)init;

@end
