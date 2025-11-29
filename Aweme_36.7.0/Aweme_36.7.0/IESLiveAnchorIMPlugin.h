@class NSNumber;

@interface IESLiveAnchorIMPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) NSNumber *viewWillAppearTimestamp;

- (void)liveRoomWillAppear;
- (void)liveRoomWillDisappear;
- (id)imStayTimeLabelWithContext:(id)a0;
- (void).cxx_destruct;

@end
