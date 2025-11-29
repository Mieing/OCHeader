@interface AWEIMAssetGalleryPickerCustomConfig : NSObject

@property (nonatomic) unsigned long long maxAssetCount;
@property (nonatomic) BOOL watchOnce;
@property (nonatomic) BOOL simpleSendMode;
@property (nonatomic) BOOL disableSendVideo;
@property (nonatomic) BOOL disableLivePhoto;
@property (nonatomic) BOOL disableBindPhoneAlert;
@property (nonatomic) BOOL enableLowQualityEarlyReturn;
@property (copy, nonatomic) id /* block */ sendCompletionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void).cxx_destruct;

@end
