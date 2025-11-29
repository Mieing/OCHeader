@class NSString, NSDictionary;

@interface AWEPostPagePassiveAnchorElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)didSelectExternalAnchorWithType:(long long)a0 anchorDismissBlock:(id /* block */)a1 enterFromType:(long long)a2;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)forceReceiveEvents;
- (id)buildAnchorVMWithAnchorModel:(id)a0;
- (BOOL)canHandlePassiveAnchor:(id)a0;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)anchor;
- (void)setupUI;

@end
