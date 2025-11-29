@class NSString;
@protocol IESLiveLayoutViewProvider;

@interface IESLiveLayoutSceneBigParty : NSObject <IESLiveLayoutScene>

@property (nonatomic) BOOL isAnchor;
@property (weak, nonatomic) id<IESLiveLayoutViewProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutPluginIfNeed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bigPartyGuestListViewFrame;
- (void)layoutAnchorEmojiContainer;
- (void).cxx_destruct;
- (unsigned long long)currentScene;

@end
