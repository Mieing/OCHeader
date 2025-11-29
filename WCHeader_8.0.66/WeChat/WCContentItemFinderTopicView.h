@interface WCContentItemFinderTopicView : WCContentItemBaseView

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)initViewsWithWCContentItem:(id)a0;
- (void)layoutDefaultV2:(id)a0;
- (id)iconUrlForSharedItem:(id)a0;
- (id)iconUrlStringForSharedItem:(id)a0;
- (id)titleForSharedItem:(id)a0;
- (void)throwUrlMessage;
- (id)iconImageWithType:(int)a0;

@end
