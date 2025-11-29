@class NSString, NSDictionary, UIView, NSObject;
@protocol AWEAwemeDetailBottomBarCoordinatorProtocol, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWECommentListInputViewBarContext : NSObject <AWECommentListInputViewBarContextProtocol>

@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *cityInfoString;
@property (copy, nonatomic) id /* block */ commentInputViewIsShowBlock;
@property (copy, nonatomic) id /* block */ getInteractionControllerBlock;
@property (copy, nonatomic) id /* block */ getCellVCLogExtraBlock;
@property (weak, nonatomic) NSObject<AWEAwemeDetailBottomBarCoordinatorProtocol> *bottomBarCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
