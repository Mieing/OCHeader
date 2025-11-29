@class NSString, AVAsset, NSDate;

@interface AWEIMVideoTransCoderTranscodeContext : NSObject

@property (nonatomic) unsigned long long transcodeType;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isPreTranscode;
@property (nonatomic) BOOL useOrigin;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isFromCamera;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (copy, nonatomic) NSString *assetIdentifier;
@property (copy, nonatomic) NSString *locoalVideoPath;
@property (retain, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) id /* block */ beginCallback;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ dataCallback;

- (void).cxx_destruct;

@end
