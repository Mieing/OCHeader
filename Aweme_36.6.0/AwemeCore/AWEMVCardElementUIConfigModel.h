@class NSString, AWEMVCardCornerElementUIConfigModel;

@interface AWEMVCardElementUIConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEMVCardCornerElementUIConfigModel *imageLeftBottomElementConfigModel;
@property (retain, nonatomic) AWEMVCardCornerElementUIConfigModel *imageRightBottomElementConfigModel;
@property (nonatomic) double gradientViewHeight;
@property (retain, nonatomic) NSString *gradientStartColor;
@property (retain, nonatomic) NSString *gradientEndColor;
@property (nonatomic) double titleTextSize;
@property (nonatomic) long long titleTextWeight;
@property (nonatomic) double titleTopMargin;
@property (nonatomic) double titleBottomMarginWithoutSubTitle;
@property (nonatomic) double titleBottomMarginWithSubTitle;
@property (nonatomic) double titleLeftMargin;
@property (nonatomic) double titleRightMargin;
@property (nonatomic) double subTitleTextSize;
@property (nonatomic) long long subTitleTextWeight;
@property (nonatomic) double subTitleBottomMargin;
@property (nonatomic) double subTitleLeftMargin;
@property (nonatomic) double subTitleRightMargin;
@property (retain, nonatomic) AWEMVCardCornerElementUIConfigModel *cardLeftBottomElementConfigModel;
@property (retain, nonatomic) AWEMVCardCornerElementUIConfigModel *cardRightBottomElementConfigModel;
@property (nonatomic) double actionElementBottomMargin;
@property (nonatomic) double cardCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
