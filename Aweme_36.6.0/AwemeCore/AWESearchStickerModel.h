@class AWESearchProductInfo, NSString, NSDictionary, UIImage, AWESearchScreenShotTitleModel;

@interface AWESearchStickerModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *tagUid;
@property (copy, nonatomic) NSString *tagId;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *couponTagName;
@property (copy, nonatomic) NSString *tagSpace;
@property (copy, nonatomic) NSString *tagType;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double playTime;
@property (nonatomic) double score;
@property (copy, nonatomic) NSString *targetChannel;
@property (nonatomic) double tagCoordX;
@property (nonatomic) double tagCoordY;
@property (nonatomic) double bbox_Xmin;
@property (nonatomic) double bbox_Xmax;
@property (nonatomic) double bbox_Ymin;
@property (nonatomic) double bbox_Ymax;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (copy, nonatomic) NSDictionary *logData;
@property (nonatomic) BOOL isCouponTagStyle;
@property (nonatomic) long long couponStatus;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *mobExtra;
@property (retain, nonatomic) AWESearchProductInfo *topProduct;
@property (retain, nonatomic) AWESearchScreenShotTitleModel *screenShotTitle;

+ (long long)compareIndexOfSticker1:(id)a0 sticker2:(id)a1;
+ (id)topProductJSONTransformer;
+ (id)screenShotTitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
