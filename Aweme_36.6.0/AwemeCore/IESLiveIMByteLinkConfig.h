@class IESLiveIMByteLinkDecodeConfig, IESLiveIMByteLinkSwitchConfig, IESLiveIMByteLinkApiConfig, IESLiveIMByteLinkFallbackConfig;

@interface IESLiveIMByteLinkConfig : NSObject

@property (retain, nonatomic) IESLiveIMByteLinkFallbackConfig *fallbackConfig;
@property (retain, nonatomic) IESLiveIMByteLinkSwitchConfig *switchConfig;
@property (retain, nonatomic) IESLiveIMByteLinkDecodeConfig *decodeConfig;
@property (retain, nonatomic) IESLiveIMByteLinkApiConfig *apiConfig;

- (void).cxx_destruct;

@end
