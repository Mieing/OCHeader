@interface AWECodeGenPreviewConfigModel : AWEBaseDataModel

@property (nonatomic) BOOL isPreview;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int setType;
@property (nonatomic) int disableReason;
@property (nonatomic) BOOL autoSwitch;

+ (id)JSONKeyPathsByPropertyKey;

@end
