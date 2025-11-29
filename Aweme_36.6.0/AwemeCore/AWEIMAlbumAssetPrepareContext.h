@class AVAsset, NSArray, NSData, PHAsset, NSString;

@interface AWEIMAlbumAssetPrepareContext : NSObject <NSCopying>

@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL useOrigin;
@property (nonatomic) long long assetType;
@property (retain, nonatomic) NSData *resultImageData;
@property (retain, nonatomic) NSData *thumbnailImageData;
@property (retain, nonatomic) NSData *firstFrameImageData;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (nonatomic) BOOL loadFail;
@property (nonatomic) BOOL loadDidStart;
@property (copy, nonatomic) NSArray *stickerIDs;
@property (copy, nonatomic) NSString *videoLocalPath;
@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) BOOL isICloud;
@property (nonatomic) double startTime;
@property (nonatomic) double loadEndTime;
@property (nonatomic) double coverLoadFinishTime;
@property (nonatomic) double compressDuration;
@property (nonatomic) long long assetErrorCode;
@property (nonatomic) long long coverErrorCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
