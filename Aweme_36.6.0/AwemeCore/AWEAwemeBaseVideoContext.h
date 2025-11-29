@class NSString, NSDictionary, AWEAwemeModel, NSMutableDictionary, NSNumber;
@protocol AWEPlayInteractionViewControllerNewProtocol, AFDRichContentContainerDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerDelegate, AWEAwemePlayVideoBaseContainer, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEPlayInteractionBizControllerProtocol, AWEAwemePlayInteractionPlayDelegate, AWEPlayInteractionViewControllerProtocol, AWEPlayVideoViewControllerContainerProtocol, AFDRichContentAlbumImageDelegateProtocol, AWEStoryContainerViewControllerDelegate, AFDRichContentProgressControllerDelegate, AWEAwemePlayInteractionPanelDelegate;

@interface AWEAwemeBaseVideoContext : NSObject <AWEAwemeBaseVideoContextProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) double defaultSeekToTime;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *ruleId;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) NSMutableDictionary *richIndexDict;
@property (nonatomic) struct EngineAudioWrapper { } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { } *videoWrapper;
@property (nonatomic) BOOL interactionControllerIsScrollDisabled;
@property (retain, nonatomic) NSNumber *usingLogExtraDictEnterMethod;
@property (nonatomic) BOOL shouldPreventPlay;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionBizControllerProtocol> interactionController;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerNewProtocol> interactionNewController;
@property (weak, nonatomic) id<AFDRichContentProgressControllerDelegate, AWEPlayVideoDelegate, AWEAwemePlayVideoBaseContainer, AFDRichContentContainerDelegate, AWEPlayVideoViewControllerDelegate, AWEPlayVideoViewControllerContainerProtocol, AFDRichContentAlbumImageDelegateProtocol> baseViewController;
@property (weak, nonatomic) id<AWEStoryContainerViewControllerDelegate> storyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
