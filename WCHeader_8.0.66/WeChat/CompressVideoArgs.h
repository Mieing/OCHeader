@class AVAsset, NSString, NSURL, NSDictionary;

@interface CompressVideoArgs : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AVAsset *asset;
@property (nonatomic) unsigned long long pickerScene;
@property (nonatomic) BOOL usingMAV;
@property (nonatomic) BOOL isSlowMotion;
@property (nonatomic) BOOL isSwRetryTask;
@property (nonatomic) BOOL isOpenExportRetryWithSW;
@property (nonatomic) BOOL isHwRetryTask;
@property (nonatomic) BOOL isOpenExportRetryWithHW;
@property (nonatomic) BOOL isLivePhoto;
@property (nonatomic) BOOL isEnableHardHEVCEncode;
@property (retain, nonatomic) NSString *pathPrefix;
@property (retain, nonatomic) NSString *encodeJson;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ progressCallback;

- (void).cxx_destruct;

@end
