@class AWEIMMessageConversation, NSString, AWEIMComponentContext, NSDictionary, AWEIMMessageListConfig, NSMutableArray, AWEIMConComponentViewCache;
@protocol IESIMConversationComponentConfigurationProtocol, IESIMConversationBizContextProtocol, IESIMMessageCellComponentConfigProtocol;

@interface AWEIMConversationContext : AWEIMComponentContext <AWEIMComponentPerfTracker, IESIMConversationContextProtocol>

@property (retain, nonatomic) id<IESIMConversationComponentConfigurationProtocol> componentConfiguration;
@property (nonatomic) BOOL isPadSplit;
@property (retain, nonatomic) AWEIMComponentContext<IESIMConversationBizContextProtocol> *bizContext;
@property (nonatomic) BOOL isStranger;
@property (nonatomic) BOOL notFirstViewDidAppear;
@property (nonatomic) BOOL firstFrameCompleted;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (readonly, nonatomic) NSString *chatEnterFrom;
@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) unsigned long long sceneSubType;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) AWEIMMessageConversation *parentConversation;
@property (retain, nonatomic) AWEIMMessageListConfig *config;
@property (retain, nonatomic) NSString *enterFromVC;
@property (nonatomic) BOOL isEnterFromReport;
@property (nonatomic) BOOL isEnterWithAnchorMessage;
@property (nonatomic) BOOL isEditMode;
@property (nonatomic) unsigned long long editModeSubScene;
@property (copy, nonatomic) NSString *editModeEnterFrom;
@property (readonly, nonatomic) BOOL isCombineShareScene;
@property (nonatomic) BOOL hasBulletEffect;
@property (retain, nonatomic) NSMutableArray *selectMsgList;
@property (nonatomic) BOOL isDeactive;
@property (retain, nonatomic) AWEIMConComponentViewCache *conViewCache;
@property (retain, nonatomic) id<IESIMMessageCellComponentConfigProtocol> msgComponentConfig;
@property (nonatomic) BOOL needReloadWhenWillAppear;
@property (nonatomic) long long appMemoryBeforeInit;
@property (nonatomic) BOOL viewDidAppearAndRenderOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imConversation;
- (BOOL)isFormatScene;
- (BOOL)isFloatMode;
- (id)sceneConversation;
- (BOOL)enableTrackPerfMetrics;
- (void)trackPerfMetrics:(double)a0 compClass:(Class)a1 invocationSelector:(SEL)a2;
- (BOOL)isEnterFromMsgList;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
