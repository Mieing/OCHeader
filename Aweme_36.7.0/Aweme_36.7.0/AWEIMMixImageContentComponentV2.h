@interface AWEIMMixImageContentComponentV2 : AWEIMMixImageContentComponent

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)didTapCoverAction:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_refreshData;
- (void)reloadImage;
- (void)didTapCoverAction;
- (void)p_configContentPropsDelayCoverHide:(BOOL)a0;
- (id)displayMessage;

@end
