@class UIFont, NSString, NSURL, WCFinderCollectionShareItem;

@interface WCFinderItemCollectionCellViewModel : CommonMessageViewModel

@property (readonly, nonatomic) WCFinderCollectionShareItem *shareItem;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (readonly, nonatomic) double thumbLength;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) UIFont *descriptionFont;
@property (readonly, nonatomic) NSURL *thumbURL;
@property (readonly, nonatomic) NSString *groupTitle;
@property (readonly, nonatomic) BOOL enabledFavorite;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)additionalAccessibilityDescription;
- (double)titleHeight;
- (double)descriptionHeight;
- (id)reportParamsWithIsFavorite:(BOOL)a0;
- (void)exposeReport;

@end
