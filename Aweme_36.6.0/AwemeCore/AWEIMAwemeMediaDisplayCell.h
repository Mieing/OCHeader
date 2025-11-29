@class NSString, NSDictionary, AWEAwemeModel, UIView, UIViewController;
@protocol AWEIMAwemeMediaDisplayControllerProtocol, AWEIMFeedGroupChatScreenShootBubbleViewProtocol, AWEIMFeedIronManAnchorBubbleViewProtocol;

@interface AWEIMAwemeMediaDisplayCell : UITableViewCell <AWEIMAwemeMediaDisplayCellProtocol>

@property (retain, nonatomic) UIView<AWEIMFeedIronManAnchorBubbleViewProtocol> *bubbleView;
@property (retain, nonatomic) UIView<AWEIMFeedGroupChatScreenShootBubbleViewProtocol> *groupChatScreenShootBubbleView;
@property (retain, nonatomic) UIViewController<AWEIMAwemeMediaDisplayControllerProtocol> *viewController;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableIMFeedPlayInteractionBugfix;
+ (double)bottomOffset:(id)a0 model:(id)a1;

- (void)_removeChildVC;
- (void)_addChildVC;
- (void)__addBubble;
- (void)__addGroupChatScreenShootBubbleView;
- (id)makeChildVCWith:(id)a0 extraParams:(id)a1;
- (id)createChildVCNew:(id)a0 extraParams:(id)a1;
- (void)setExtraParamsIfNeeded:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;

@end
