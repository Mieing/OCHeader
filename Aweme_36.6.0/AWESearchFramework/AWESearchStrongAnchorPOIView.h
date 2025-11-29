@class UILabel, NSString;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol;

@interface AWESearchStrongAnchorPOIView : UIView <AWESearchPluginProtocol>

@property (retain, nonatomic) UILabel *hasTailLabel;
@property (nonatomic) long long hasTailLableWidth;
@property (nonatomic) long long hasTailLableLength;
@property (nonatomic) long long rightAlignedLabelLeftX;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pluginDidLoad;
- (void)pluginDidRemove;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)pluginViewDidAppear:(BOOL)a0;
- (void)pluginViewDidDisappear:(BOOL)a0;
- (void)pluginDidEndShowing;
- (void)pluginDidStartShowing;
- (void)pluginViewWillAppear:(BOOL)a0;
- (void)pluginViewWillDisappear:(BOOL)a0;
- (void)pluginViewDidLoad;
- (void)updateWithChunkModel:(id)a0;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (void)pluginPrepareForReuse;
- (void)setModelOnly:(id)a0;
- (id)fetchRightAlignLabelComponentWithLabelArray:(id)a0;
- (BOOL)isValidRightAlignComponent:(id)a0 inComponents:(id)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;
- (void)updateWithModel:(id)a0;

@end
