@class NSString, IESLiveLayoutPlaceholderView, IESLiveRightBottomMutuallyExclusiveItem;

@interface IESLiveAudienceVideoPlayFragment : IESLiveRoomComponent <IESLiveSEIListener>

@property (weak, nonatomic) IESLiveLayoutPlaceholderView *placeholderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *anchorVideoItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)p_addPlaceholderView;
- (void)p_removePlaceholderView;
- (void).cxx_destruct;

@end
