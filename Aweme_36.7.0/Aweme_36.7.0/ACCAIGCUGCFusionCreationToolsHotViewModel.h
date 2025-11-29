@class UIFont, NSString, UIColor, NSArray, AWEVideoPublishViewModel;

@interface ACCAIGCUGCFusionCreationToolsHotViewModel : NSObject

@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewTop;
@property (nonatomic) double collectionViewBottom;
@property (nonatomic) double sectionInsetLeft;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double contentInsetLeft;
@property (nonatomic) double cellHeight;
@property (nonatomic) double cellWidth;
@property (nonatomic) double titleTop;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double titleLeft;
@property (nonatomic) double titleHeight;
@property (readonly, nonatomic) long long numberOfSections;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *loraList;
@property (copy, nonatomic) NSArray *photoList;
@property (nonatomic) BOOL disableLoadMore;
@property (readonly, nonatomic) BOOL hasShotcutData;
@property (nonatomic) double shotcutMaxWidth;
@property (copy, nonatomic) NSArray *hotList;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;

+ (id)hotModel;
+ (double)hotCellWidth;
+ (double)shotcutCellWidth;
+ (id)defaultPersonInfo;
+ (double)shortcutCellWidth;
+ (double)hotViewHeight;
+ (id)shotcutModel;
+ (id)shortcutModelWithNeedPlaceHolder:(BOOL)a0;

- (void).cxx_destruct;

@end
