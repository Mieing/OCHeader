@class NSString, UIViewController;
@protocol IESECCommentReplyParams, AWECommentListViewControllerProtocol;

@interface IESECCommentReplyHandler : NSObject <IESECCommentReplyHandlerInterface>

@property (retain, nonatomic) id<IESECCommentReplyParams> params;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 animated:(BOOL)a1 refresh:(BOOL)a2 scrollToTop:(BOOL)a3 completion:(id /* block */)a4;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)createProductCommentPanelConfigModel:(id)a0;
- (id)createProductCommentHeaderConfigModel:(id)a0;
- (id)createProductCommentCoreContentConfigModel:(id)a0;
- (id)createProductCommentInputViewConfigModel:(id)a0;
- (id)createProductCommentLongPressPanelConfigModel:(id)a0;
- (id)createProductCommentMediaFeedInteractionConfigModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (void)setup;

@end
