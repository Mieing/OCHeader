@class NSArray, TMBPEAHybridContextValidator;

@interface TMBPEAHybridContext : NSObject

@property (copy, nonatomic) NSArray *contextValidationPageTypes;
@property (nonatomic) double contextCleanInterval;
@property (nonatomic) double contextCleanThreshold;
@property (retain, nonatomic) TMBPEAHybridContextValidator *validator;

- (void)setupWithConfig:(id)a0;
- (id)defaultValidationPageTypes;
- (double)defaultContextCleanInterval;
- (double)defaultContextCleanThreshold;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;

@end
