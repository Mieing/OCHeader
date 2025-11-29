@class NSString, NSArray, AWECodeGenUrlModel, NSDictionary;

@interface AWECodeGenVideoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *playAddrModel;
@property (retain, nonatomic) AWECodeGenUrlModel *coverModel;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (retain, nonatomic) AWECodeGenUrlModel *dynamicCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *originCoverModel;
@property (copy, nonatomic) NSString *ratio;
@property (retain, nonatomic) AWECodeGenUrlModel *downloadAddrModel;
@property (nonatomic) BOOL hasWatermark;
@property (retain, nonatomic) AWECodeGenUrlModel *playAddrLowbrModel;
@property (copy, nonatomic) NSArray *bitRateArray;
@property (retain, nonatomic) AWECodeGenUrlModel *p_newDownloadAddrModel;
@property (nonatomic) int duration;
@property (retain, nonatomic) AWECodeGenUrlModel *downloadSuffixLogoAddrModel;
@property (nonatomic) BOOL hasDownloadSuffixLogoAddr;
@property (retain, nonatomic) AWECodeGenUrlModel *playAddr265Model;
@property (nonatomic) long long isH265;
@property (retain, nonatomic) AWECodeGenUrlModel *playAddrH264Model;
@property (retain, nonatomic) AWECodeGenUrlModel *uiAlikeDownloadAddrModel;
@property (retain, nonatomic) AWECodeGenUrlModel *captionDownloadAddrModel;
@property (nonatomic) long long cdnUrlExpired;
@property (nonatomic) int isLongVideo;
@property (retain, nonatomic) AWECodeGenUrlModel *animatedCoverModel;
@property (copy, nonatomic) NSDictionary *tag;
@property (nonatomic) BOOL needSetToken;
@property (retain, nonatomic) AWECodeGenUrlModel *aicoverModel;
@property (nonatomic) double covertsp;
@property (copy, nonatomic) NSDictionary *tokenAuth;
@property (copy, nonatomic) NSString *miscDownloadAddrs;
@property (nonatomic) BOOL isDrmSource;
@property (nonatomic) BOOL isCallback;
@property (copy, nonatomic) NSString *videoModel;
@property (nonatomic) int realDuration;
@property (copy, nonatomic) NSArray *tagsArray;
@property (nonatomic) BOOL useStaticCover;
@property (copy, nonatomic) NSArray *bigThumbsArray;
@property (retain, nonatomic) AWECodeGenUrlModel *playAddrBytevc1Model;
@property (nonatomic) long long isBytevc1;
@property (copy, nonatomic) NSString *meta;
@property (retain, nonatomic) AWECodeGenUrlModel *optimizedCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *intelligentCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *blurCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *resetCoverModel;
@property (nonatomic) int isSourceHdr;
@property (nonatomic) int horizontalType;
@property (retain, nonatomic) AWECodeGenUrlModel *coverOriginalScaleModel;
@property (copy, nonatomic) NSDictionary *audio;
@property (retain, nonatomic) AWECodeGenUrlModel *gaussianCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *maskCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *thumbCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *mediumCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *replaceSeriesCoverModel;
@property (nonatomic) int longVideoRealDuration;
@property (retain, nonatomic) AWECodeGenUrlModel *effectDynamicCoverModel;
@property (copy, nonatomic) NSString *effectDynamicCoverAverageColor;
@property (retain, nonatomic) AWECodeGenUrlModel *vsizeCoverModel;
@property (copy, nonatomic) NSArray *bitRateAudioArray;
@property (retain, nonatomic) AWECodeGenUrlModel *yCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *yCoverHorModel;
@property (copy, nonatomic) NSDictionary *videoSharpInfo;
@property (retain, nonatomic) AWECodeGenUrlModel *wannaCoverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *columnsCoverModel;
@property (copy, nonatomic) NSString *format;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
