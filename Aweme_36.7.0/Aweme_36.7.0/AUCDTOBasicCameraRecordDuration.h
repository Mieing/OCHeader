@class NSNumber;

@interface AUCDTOBasicCameraRecordDuration : MTLModel

@property (copy, nonatomic) NSNumber *maxRecordDuration;
@property (copy, nonatomic) NSNumber *minRecordDuration;
@property (nonatomic) BOOL limitNormalThreeOptions;

- (void).cxx_destruct;
- (id)init;

@end
