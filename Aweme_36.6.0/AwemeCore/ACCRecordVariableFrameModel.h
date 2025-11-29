@interface ACCRecordVariableFrameModel : NSObject

@property (nonatomic, getter=isFrameRatio3_4) BOOL frameRatio3_4;
@property (nonatomic) long long modeId;

- (id)initWithDefaultRatio:(BOOL)a0 bindModeId:(long long)a1;

@end
