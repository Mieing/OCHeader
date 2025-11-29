@class IESLiveStackManager, IESLiveStackTemplate, IESLiveStackDSLParser, NSString;

@interface IESLiveRoomLayoutCommonContainer : NSObject <IESLiveStackTemplateFilterProtocol>

@property (retain, nonatomic) IESLiveStackManager *stackManager;
@property (retain, nonatomic) IESLiveStackTemplate *stackTemplate;
@property (retain, nonatomic) IESLiveStackDSLParser *dslParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)updateContainerLayoutRule:(id)a0;
- (void)switchToSideMode;
- (void)switchToNormalMode;
- (void)insertShadowStackManager:(id)a0;
- (void)removeShadowStackManager:(id)a0;
- (id)roomContainerView;
- (void)filterAddView:(id)a0;
- (id)toolbarContainer;
- (void)setupWithOrientation:(long long)a0;
- (double)adjustAnchorToolBarHeight;
- (void)attachRulesWithParser:(id)a0 diContext:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)bottomOffset;

@end
