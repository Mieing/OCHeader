@class NSString, UIViewController, AWEAwemeModel;
@protocol AWECommentListViewControllerProtocol;

@interface IESGCPCommentPanelController_Douyin : NSObject <IESGCPCommentPanelViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCommentPanelAwemeModel:(id)a0;
- (void)showCommentPanelWithShowInputView:(BOOL)a0 exterMethod:(id)a1;
- (void)configCommentVC;
- (unsigned long long)commentPanelEnterSource:(id)a0;
- (void).cxx_destruct;

@end
