@class AWEPOIPhotoHighlightInfoModel, NSString, AWEPOIPhotoUploaderInfoModel, NSNumber, AWEURLModel;
@protocol IESLLFuseURLModel;

@interface AWEPOIPhotoModel : AWEBaseApiModel <IESLLFusePOIPhotoModel>

@property (readonly, nonatomic) id<IESLLFuseURLModel> f_imageLarge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *imageLarge;
@property (retain, nonatomic) AWEURLModel *imageThumb;
@property (copy, nonatomic) NSString *watermark;
@property (retain, nonatomic) AWEPOIPhotoUploaderInfoModel *uploaderInfo;
@property (copy, nonatomic) NSString *imageColorStr;
@property (retain, nonatomic) NSNumber *picScore;
@property (retain, nonatomic) NSString *picSource;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *logParams;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *videoCoverUri;
@property (copy, nonatomic) NSString *videoCoverUrl;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (retain, nonatomic) AWEPOIPhotoHighlightInfoModel *highlight;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
