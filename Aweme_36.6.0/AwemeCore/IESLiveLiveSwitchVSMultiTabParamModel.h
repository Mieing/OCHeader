@class NSNumber, NSString;

@interface IESLiveLiveSwitchVSMultiTabParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *tabId;
@property (copy, nonatomic) NSString *openUrl;
@property (retain, nonatomic) NSNumber *openPanelHeightPercent;
@property (nonatomic) BOOL adhereToStream;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
