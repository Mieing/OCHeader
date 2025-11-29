@class NSString;

@interface IESLiveInteractiveDynamicPanelController : IESLiveInteractionPopupViewController <IESHYHybridViewLifecycleProtocol>

@property (nonatomic) BOOL isRoot;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *navTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
