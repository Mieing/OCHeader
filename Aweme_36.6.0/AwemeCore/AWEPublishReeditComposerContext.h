@class AWECodeGenAwemeV1ItemAnchorInfoResponseModel, AWEPublishReeditPresetModel, AWEVideoPublishConfig;

@interface AWEPublishReeditComposerContext : NSObject

@property (retain, nonatomic) AWEVideoPublishConfig *config;
@property (retain, nonatomic) AWECodeGenAwemeV1ItemAnchorInfoResponseModel *anchorInfo;
@property (retain, nonatomic) AWEPublishReeditPresetModel *presetModel;

- (void).cxx_destruct;

@end
