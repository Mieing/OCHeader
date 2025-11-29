@class IESLiveBottomRightCardStore, IESLiveTopRightCardStore, IESLiveCommonCardApi;

@interface IESLiveBottomRightCardFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveBottomRightCardStore *bottomRightCardStore;
@property (retain, nonatomic) IESLiveCommonCardApi *api;
@property (retain, nonatomic) IESLiveTopRightCardStore *topRightCardStore;

- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (id)setCardStore:(id)a0;
- (void)fetchCommonCardInfo;
- (void).cxx_destruct;

@end
