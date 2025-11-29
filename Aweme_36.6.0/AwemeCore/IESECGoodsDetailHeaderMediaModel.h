@class NSString, NSDictionary, IESECImageModel, IESECHeadVideoModel;

@interface IESECGoodsDetailHeaderMediaModel : IESECBaseApiModel

@property (retain, nonatomic) IESECHeadVideoModel *video;
@property (retain, nonatomic) IESECHeadVideoModel *previewVideo;
@property (retain, nonatomic) IESECImageModel *image;
@property (copy, nonatomic) NSString *preImageURL;
@property (nonatomic) BOOL supportPreview;
@property (nonatomic) BOOL supportNavBlur;
@property (nonatomic) unsigned long long previewType;
@property (copy, nonatomic) NSString *findSameURL;
@property (copy, nonatomic) NSString *findSameURLV2;
@property (copy, nonatomic) NSDictionary *videoActionTrack;
@property (nonatomic) long long previewIndex;
@property (copy, nonatomic) NSString *titleLabel;
@property (nonatomic) BOOL videoButtonNewStyle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
