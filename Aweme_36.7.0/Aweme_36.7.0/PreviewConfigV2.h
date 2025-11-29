@interface PreviewConfigV2 : GPBMessage

@property (nonatomic) BOOL isPreview;
@property (nonatomic) BOOL hasIsPreview;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) int setType;
@property (nonatomic) BOOL hasSetType;
@property (nonatomic) int disableReason;
@property (nonatomic) BOOL hasDisableReason;
@property (nonatomic) BOOL autoSwitch;
@property (nonatomic) BOOL hasAutoSwitch;

+ (id)descriptor;

@end
