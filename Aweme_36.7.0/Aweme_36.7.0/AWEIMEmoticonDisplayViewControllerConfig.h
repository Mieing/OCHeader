@class AWEIMMessageConversation, AWEIMMessage, NSDictionary, NSString, AWEIMHalfScreenContainerViewController, AWEIMSimilarEmojiDisplayModel, NSIndexPath;
@protocol AWEIMSendSimilarEmoticonProtocol, AWEIMSimilarEmoticonDisplayViewProtocol, AWEIMQuickLookCollectionViewCellEventProtocol;

@interface AWEIMEmoticonDisplayViewControllerConfig : NSObject <AWEIMEmoticonDisplayViewControllerConfigProtocol>

@property (retain, nonatomic) AWEIMSimilarEmojiDisplayModel *displayEmoticonModel;
@property (nonatomic) BOOL findSimilarEmoticon;
@property (nonatomic) BOOL hasSimilarEmoticonData;
@property (copy, nonatomic) NSDictionary *trackInfos;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long triggerType;
@property (retain, nonatomic) AWEIMMessage *message;
@property (weak, nonatomic) AWEIMHalfScreenContainerViewController *containerVC;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMSimilarEmoticonDisplayViewProtocol> similarDelegate;
@property (weak, nonatomic) id<AWEIMQuickLookCollectionViewCellEventProtocol> quickLookCellEvent;
@property (weak, nonatomic) id<AWEIMSendSimilarEmoticonProtocol> sendEmoticonDelegate;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ sendEmojiBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
