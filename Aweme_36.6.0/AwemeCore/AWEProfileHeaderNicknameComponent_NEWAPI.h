@class AWEProfileHeaderNameLabelContainerView, AWEProfileContext, AWEProfileHeaderVirtualView, NSString;

@interface AWEProfileHeaderNicknameComponent_NEWAPI : AWEProfileHeaderBaseComponent <AWEProfileHeaderComponentWidthAdaptionProtocol, AWEUserMessage, AWEProfileHeaderNameLabelContainerViewDelegate, AWEProfileHeaderFollowAreaStatusSubscriber, AWEProfileQuickSwitchAccountProtocol>

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) AWEProfileHeaderVirtualView *virtualView;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (retain, nonatomic) AWEProfileHeaderNameLabelContainerView *nameLabelContainerView;
@property (nonatomic) BOOL isFollowFromProfile;
@property (nonatomic) double margin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (id)buildVirtualView:(id)a0;
- (id)buildSubComponents;
- (void)updateContainerWidth:(double)a0;
- (void)showQuickSwitchAccountPanel;
- (void)updateComponentData:(id)a0;
- (void)calibrateSize;
- (id)initWithData:(id)a0 context:(id)a1 maxWidth:(double)a2;
- (void)followStatusDidChange:(id)a0;
- (void)showRemarkNameEntranceAfterFollow;
- (void)registerSubscriberIfNeeded;
- (double)nameLabelContainerViewMaxWidth;
- (void).cxx_destruct;
- (void)dealloc;

@end
