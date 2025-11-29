@class UIView, NSString, AWERecordInspirationSearchContentViewController, NSArray, AWEVideoPublishViewModel, ACCWaterfallViewController, ACCRecordInspirationContentProvider, AWERecordInspirationCategoryItem, UILabel;

@interface AWERecordInspirationCommonSearchResultRecommendHeader : UICollectionViewCell <ACCWaterfallContentScrollDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) AWERecordInspirationSearchContentViewController *searchContentViewController;
@property (retain, nonatomic) ACCWaterfallViewController *viewController;
@property (retain, nonatomic) AWERecordInspirationCategoryItem *inspirationCategoryItem;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) ACCRecordInspirationContentProvider *contentProvider;
@property (retain, nonatomic) UIView *bottomContentView;
@property (retain, nonatomic) UIView *bottomLeftLineView;
@property (retain, nonatomic) UIView *bottomRightLineView;
@property (retain, nonatomic) UILabel *bottomNoMoreLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
