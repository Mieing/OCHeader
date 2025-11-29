@class NSString, NSMutableSet, IESLiveStreamAbnormalView;
@protocol IESLiveStreamAbnormalActionDispatcher, IESLivePlayerProtocol;

@interface IESLiveStreamAbnormalAction : NSObject <IESLiveSEIListener, IESLiveStreamAbnormalActionProtocol>

@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) IESLiveStreamAbnormalView *streamAbnormalView;
@property (retain, nonatomic) NSMutableSet *showingSourceSet;
@property (nonatomic) struct CGSize { double width; double height; } lastContainerViewSize;
@property (nonatomic) BOOL lastMuted;
@property (retain, nonatomic) id<IESLiveStreamAbnormalActionDispatcher> abnormalActionDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShow;

- (void)dealloc;
- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (BOOL)supportReuse;
- (void)updateStreamAbnormalView:(id)a0 shouldShow:(BOOL)a1 source:(unsigned long long)a2;
- (void)updateStreamAbnormalView:(id)a0 shouldShow:(BOOL)a1 source:(unsigned long long)a2 superview:(id)a3;
- (void)updateStreamAbnormalView:(id)a0 shouldShow:(BOOL)a1 source:(unsigned long long)a2 superview:(id)a3 backgroundURL:(id)a4 warningContentURL:(id)a5;
- (void)removeStreamAbnormalViewForce;
- (void)updateStreamAbnormalViewLayout;
- (void)resetStreamAbnormalViewWhenStart;
- (void)updateStreamAbnormalView:(BOOL)a0 source:(unsigned long long)a1;
- (void)updateStreamAbnormalView:(BOOL)a0 source:(unsigned long long)a1 superview:(id)a2;
- (void)updateStreamAbnormalView:(BOOL)a0 source:(unsigned long long)a1 superview:(id)a2 backgroundURL:(id)a3 warningContentURL:(id)a4;
- (void)updateAbnormalAlogInfo:(id)a0 shouldShow:(BOOL)a1 source:(unsigned long long)a2;
- (id)abnormalSoureDescription:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0;

@end
