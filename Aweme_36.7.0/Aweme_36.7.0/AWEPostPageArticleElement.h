@class NSDictionary, AWENewPublishTableCell, NSString;

@interface AWEPostPageArticleElement : AWEPostPageAnchorCheckCellElement <AWEPostPageAnchorProtocol, AWECommerceAnchorMessageProtocol>

@property (retain, nonatomic) AWENewPublishTableCell *articleCell;
@property (readonly, copy, nonatomic) NSDictionary *extras;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerJSBridgeHandler;
+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)elementAppear;
- (void)didSelectAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)canHandleAnchorType:(long long)a0;
- (void)addArticleObserver;
- (void)updateArticleWithJsonStr:(id)a0;
- (void)articleJSBResultNotification:(id)a0;
- (id)anchorPageURL;
- (void)cancleSelectedArticle:(id)a0;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (id)cell;
- (id)cellIdentifier;
- (void)didSelect;
- (void)setUpUI;

@end
