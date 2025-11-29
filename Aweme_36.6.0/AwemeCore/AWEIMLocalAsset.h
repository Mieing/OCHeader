@class NSData, NSString, UIImage, PHAsset, NSArray, NSDictionary, NSNumber, AVAsset;
@protocol AWEIMAlbumAssetProcessOperationExecutor, AWEIMAlbumAssetPreprocessorProtocol;

@interface AWEIMLocalAsset : NSObject <AWEIMLocalAssetProtocol>

@property (retain, nonatomic) id<AWEIMAlbumAssetPreprocessorProtocol, AWEIMAlbumAssetProcessOperationExecutor> preProcessor;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *exchangeImageAssetIdentifier;
@property (nonatomic) BOOL generateFromIMCloudLoaderOperation;
@property (nonatomic) long long type;
@property (nonatomic) long long assetFrom;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) UIImage *videoCoverImage;
@property (nonatomic) double videoDuration;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) double asssetBeginSendTimestamp;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) struct CGSize { double width; double height; } coverSize;
@property (retain, nonatomic) NSData *coverImageData;
@property (retain, nonatomic) NSData *firstFrameImageData;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) struct CGSize { double width; double height; } originCoverSize;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double compressDuration;
@property (nonatomic) BOOL useOrigin;
@property (nonatomic) BOOL loadFailed;
@property (nonatomic) BOOL watchOnce;
@property (nonatomic) BOOL isExchangeImage;
@property (nonatomic) long long concreteType;
@property (retain, nonatomic) NSNumber *isFromIMEditMode;
@property (retain, nonatomic) NSString *userDefinedEnterMethod;
@property (retain, nonatomic) NSString *userDefinedEnterFrom;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL needSecondaryRefresh;
@property (nonatomic) long long exchangeRequestSeverMessageId;
@property (nonatomic) long long groupExchangeBatchID;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *checkText;
@property (nonatomic) long long selectedTime;
@property (copy, nonatomic) NSArray *stickerIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })adjustVideoResolution:(id)a0;
+ (struct CGSize { double x0; double x1; })getVideoLimitResolutionUseOrigin:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })adjustVideoResolutionWithSize:(struct CGSize { double x0; double x1; })a0;

- (void)updateAssetDataIfNeed;
- (void).cxx_destruct;
- (id)init;

@end
