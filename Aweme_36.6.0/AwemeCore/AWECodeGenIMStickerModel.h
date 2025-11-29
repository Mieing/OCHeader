@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenIMStickerModel : AWEBaseDataModel

@property (nonatomic) long long modelID;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (copy, nonatomic) NSString *staticType;
@property (retain, nonatomic) AWECodeGenUrlModel *staticUrlModel;
@property (copy, nonatomic) NSString *animateType;
@property (retain, nonatomic) AWECodeGenUrlModel *animateUrlModel;
@property (nonatomic) int stickerType;
@property (nonatomic) long long originPackageId;
@property (copy, nonatomic) NSString *hashString;
@property (nonatomic) long long resourcePackageId;
@property (copy, nonatomic) NSString *stickerInfoSource;
@property (copy, nonatomic) NSString *singleHeyCanId;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *idStr;
@property (retain, nonatomic) AWECodeGenUrlModel *thumbnailModel;
@property (copy, nonatomic) NSString *authorSecUid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
