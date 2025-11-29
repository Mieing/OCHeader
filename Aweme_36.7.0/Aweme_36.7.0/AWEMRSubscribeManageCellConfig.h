@class NSString, UIImage, AWEMRSubscribeManageOptionCardConfig;

@interface AWEMRSubscribeManageCellConfig : NSObject

@property (nonatomic) long long cellType;
@property (nonatomic) unsigned long long cornerType;
@property (nonatomic) BOOL containsImage;
@property (copy, nonatomic) NSString *imageSceneTag;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) UIImage *imagePlaceHolder;
@property (nonatomic) double imageCorner;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) double foldedHeight;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) double separatorLeftInset;
@property (nonatomic) BOOL isClickEnabled;
@property (nonatomic) BOOL shouldExpand;
@property (retain, nonatomic) AWEMRSubscribeManageOptionCardConfig *leftOptionCardConfig;
@property (retain, nonatomic) AWEMRSubscribeManageOptionCardConfig *rightOptionCardConfig;

+ (long long)cornerTypeOfItemIndex:(long long)a0 totalCount:(long long)a1;
+ (BOOL)shouldShowSeparatorOfItemIndex:(long long)a0 totalCount:(long long)a1;

- (void).cxx_destruct;

@end
