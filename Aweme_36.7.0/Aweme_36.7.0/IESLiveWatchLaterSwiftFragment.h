@interface IESLiveWatchLaterSwiftFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler>

@property (nonatomic) int watchLater;
@property (nonatomic) BOOL firstShow;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)updateItem:(id)a0 buttonText:(id)a1 displayText:(id)a2 itemIamge:(id)a3 status:(int)a4 selfInstance:(id)a5;
- (void)trackWatchLaterWithEvent:(id)a0 status:(int)a1;
- (id)init;

@end
