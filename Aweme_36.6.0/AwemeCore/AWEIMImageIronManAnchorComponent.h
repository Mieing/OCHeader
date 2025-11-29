@class AWEIMImageIronManAnchorModel;

@interface AWEIMImageIronManAnchorComponent : AWEIMFlexComponent

@property (retain, nonatomic) AWEIMImageIronManAnchorModel *anchorModel;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (id)p_trackGameCardParams;
- (void)__ironManAnchorViewDidTapped;
- (id)p_buildTransferContext;
- (void).cxx_destruct;

@end
