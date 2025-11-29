@protocol BDHybridCertContextValidator;

@interface BDHybridCertConfig : NSObject

@property (retain, nonatomic) id<BDHybridCertContextValidator> contextValidator;
@property (nonatomic) BOOL enableContextValidation;
@property (nonatomic) double contextCleaningTimerInterval;
@property (nonatomic) double contextCleaningTimeThreshold;

+ (id)sharedConfig;

- (void).cxx_destruct;

@end
