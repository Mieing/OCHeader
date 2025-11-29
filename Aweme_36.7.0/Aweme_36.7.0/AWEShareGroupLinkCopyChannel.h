@interface AWEShareGroupLinkCopyChannel : AWEShareBaseChannel

@property (nonatomic) long long shareCategory;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)didSelectShareItem:(id)a0;
- (void)shareGroupCopyLinkSuccess;
- (BOOL)supportMultipleOperationsWithContext:(id)a0;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
