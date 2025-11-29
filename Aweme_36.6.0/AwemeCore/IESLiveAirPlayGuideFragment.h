@class IESLiveGuideToolBarItem, NSString;

@interface IESLiveAirPlayGuideFragment : IESLiveGuideComponent <IESLiveGuideActions>

@property (retain, nonatomic) IESLiveGuideToolBarItem *guideToolBarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)addGuideToolBarItem;
- (void)showBubbleViewIfNeed;
- (void)guideToolBarDidClicked;
- (void).cxx_destruct;

@end
