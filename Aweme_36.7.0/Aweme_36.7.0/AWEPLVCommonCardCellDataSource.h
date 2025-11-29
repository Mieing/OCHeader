@class NSString, NSArray, UIImage;

@interface AWEPLVCommonCardCellDataSource : NSObject <AWEPLVTitleBottomCommonCardDataSourceProtocol>

@property (retain, nonatomic) id model;
@property (retain, nonatomic) Class modelClz;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSArray *avatarUrls;
@property (retain, nonatomic) NSArray *verticalCoverUrls;
@property (retain, nonatomic) NSArray *horizontalCoverUrls;
@property (copy, nonatomic) NSString *bottomRightText;
@property (copy, nonatomic) NSString *bottomRightTextColor;
@property (nonatomic) BOOL showFavouriteTag;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *topLeftText;
@property (copy, nonatomic) NSString *topLeftTextColor;
@property (copy, nonatomic) NSString *topLeftTagBackgroundColor;
@property (copy, nonatomic) NSString *bottomLeftText;
@property (retain, nonatomic) UIImage *bottomLeftIcon;
@property (nonatomic) unsigned long long cornerIconType;
@property (nonatomic) long long titleRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 clz:(Class)a1 dataType:(long long)a2;
- (double)textHeightWithTitleRow:(long long)a0 breakPoint:(struct { long long x0; long long x1; })a1;
- (void)cardDataSourceTransform;
- (id)videoTimeFormate:(long long)a0;
- (void).cxx_destruct;

@end
