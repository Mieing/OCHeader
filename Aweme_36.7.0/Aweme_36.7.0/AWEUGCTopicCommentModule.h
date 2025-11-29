@class AWESearchUGCPageContext, AWECommentInputViewConfigModel, AWESearchCachalotVerticalBottomBarConfigModel, NSString, NSMutableArray, AWESearchDecoratorCommentModuleContext;
@protocol AWECommentInputViewContextProtocol, AWESearchDecoratorCommentDelegateProtocol, AWECommentInputViewManagerProtocol;

@interface AWEUGCTopicCommentModule : NSObject <AWEUGCTopicModuleProtocol>

@property (retain, nonatomic) AWESearchDecoratorCommentModuleContext *decoratorContext;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;
@property (retain, nonatomic) AWECommentInputViewConfigModel *inputConfig;
@property (retain, nonatomic) NSMutableArray *sendedCommentCid;
@property (retain, nonatomic) AWESearchCachalotVerticalBottomBarConfigModel *configModel;
@property (retain, nonatomic) AWESearchUGCPageContext *context;
@property (weak, nonatomic) id<AWESearchDecoratorCommentDelegateProtocol> commentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commentContextWithGroupID:(id)a0;
- (id)getCommentInputViewManagerFromContext:(id)a0;
- (void)showCommentInputWithContent:(id)a0;
- (void)clearSendedCommentCid;
- (long long)getServiceIdInteger;
- (id)getLogExtraFromModel;
- (void)handleUserTappedSend;
- (void)handleCommentSentSuccessfully:(id)a0;
- (void)updateContainerClientExtra:(id)a0;
- (void)startCommentWithCommentContext:(id)a0;
- (id)getLogWithCommentId:(id)a0;
- (void).cxx_destruct;
- (void)dismissKeyboard;
- (id)getGroupId;
- (void)updateWithContext:(id)a0;

@end
