@class NSString, CameraScanCombineConfig, CameraScanCombineModelInfo;

@interface CameraScanGoodsExtensionDetectorConfig : MMObject

@property (copy, nonatomic) NSString *svrConfigData;
@property (nonatomic) long long svrRequestInterval;
@property (nonatomic) long long svrRequestUploadTimeout;
@property (nonatomic) long long svrRequestExchangeTimeout;
@property (retain, nonatomic) CameraScanCombineModelInfo *curModelInfo;
@property (retain, nonatomic) CameraScanCombineConfig *combineConfig;

- (void).cxx_destruct;

@end
