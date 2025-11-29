@class NSString, AWEKnowledgeStateSceneToken, NSMutableDictionary, UIViewController;
@protocol AFDRichContentContainerViewControllerProtocol;

@interface AWEKnowledgeStateSceneInfo : NSObject

@property (retain, nonatomic) AWEKnowledgeStateSceneToken *sceneToken;
@property (weak, nonatomic) UIViewController<AFDRichContentContainerViewControllerProtocol> *richContentContainer;
@property (copy, nonatomic) NSString *sceneType;
@property (retain, nonatomic) NSMutableDictionary *cardInfo;
@property (nonatomic) BOOL needUpdateToCard;
@property (nonatomic) BOOL enableQuickStart;
@property (retain, nonatomic) NSMutableDictionary *stateInfo;

- (void).cxx_destruct;

@end
