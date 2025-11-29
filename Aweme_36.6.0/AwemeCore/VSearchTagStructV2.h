@class NSString;

@interface VSearchTagStructV2 : GPBMessage

@property (nonatomic) BOOL vtagEnable;
@property (nonatomic) BOOL hasVtagEnable;
@property (nonatomic) int vtagDelayTs;
@property (nonatomic) BOOL hasVtagDelayTs;
@property (copy, nonatomic) NSString *defaultVtagData;
@property (nonatomic) BOOL hasDefaultVtagData;
@property (nonatomic) BOOL defaultVtagEnable;
@property (nonatomic) BOOL hasDefaultVtagEnable;
@property (nonatomic) BOOL inspirationVtagEnable;
@property (nonatomic) BOOL hasInspirationVtagEnable;

+ (id)descriptor;

- (BOOL)inspirationVtagEnable;
- (BOOL)defaultVtagEnable;
- (id)defaultVtagData;
- (int)vtagDelayTs;
- (BOOL)vtagEnable;

@end
