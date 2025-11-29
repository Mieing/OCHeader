@class NSArray, NSString;
@protocol AWEIMPickerViewControllerDataSource, AWEIMPickerlViewControllerDelegate;

@interface AWEIMPickerConfiguration : NSObject

@property (nonatomic) BOOL disableSendVideo;
@property (nonatomic) BOOL enableShowOriginSelection;
@property (nonatomic) BOOL enableDefaultSetOrigin;
@property (nonatomic) BOOL showSelectedListAndEditInPreview;
@property (nonatomic) BOOL enableLowQualityEarlyReturn;
@property (nonatomic) long long maxSelectCount;
@property (nonatomic) long long itemCountPerRow;
@property (copy, nonatomic) id /* block */ shouldBeSelectedFilter;
@property (copy, nonatomic) NSArray *supportAssetCategoryList;
@property (nonatomic) BOOL enableTapOpenPreview;
@property (copy, nonatomic) NSString *BPEAAuthorizationKey;
@property (copy, nonatomic) NSString *BPEAAppJumpPrivacyKey;
@property (copy, nonatomic) NSArray *initialSelectedAssets;
@property (copy, nonatomic) NSArray *initialLivePhotoAssetID;
@property (weak, nonatomic) id<AWEIMPickerlViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AWEIMPickerViewControllerDataSource> dataSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) double enterPickerTimeStamp;

- (id)createCategory;
- (void)setupDefaultValue;
- (void).cxx_destruct;
- (id)init;

@end
