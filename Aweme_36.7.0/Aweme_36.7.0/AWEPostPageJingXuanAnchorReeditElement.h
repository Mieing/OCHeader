@class NSString, AWEPostPageJingXuanAnchorReeditTableCell, NSDictionary, AWECommerceAnchorPublishModel;

@interface AWEPostPageJingXuanAnchorReeditElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWEPostPageJingXuanAnchorReeditTableCell *anchorTableViewCell;
@property (retain, nonatomic) AWECommerceAnchorPublishModel *jxAnchorPublishModel;
@property (nonatomic) BOOL hasRequestBindAnchor;
@property (nonatomic) BOOL hasNoBindAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)elementAppear;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)forceReceiveEvents;
- (void)showAnchorLoadingIfNeeded:(id)a0 state:(long long)a1;
- (BOOL)isAppShouldShow;
- (id)anchorContentByWebUrl:(id)a0;
- (void)addJingXuanAnchor;
- (void)deleteJingXuanAnchor;
- (void)requestBindAnchor;
- (BOOL)shouldAnchorContentFallback;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (id)cell;
- (void)setupUI;

@end
