@class NSString, MultiTalkMonoMsg;
@protocol MultiTalkMainWindowDelegate;

@interface MultiTalkWindow : MultiTalkMainWindow <MultiTalkWindowProtocol>

@property (retain, nonatomic) MultiTalkMonoMsg *m_monoMsg;
@property (weak, nonatomic) id<MultiTalkMainWindowDelegate> m_mainWindowDelegate;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) unsigned long long animateStatus;
@property (readonly, nonatomic) BOOL isExtending;
@property (nonatomic) BOOL shouldIgnoreExtendFromCollapseFirstStepAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
