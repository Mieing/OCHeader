@class NSString, MultiMediaUploadProcessController;

@interface UploadStateProcessor : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) MultiMediaUploadProcessController *context;

- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)transformToFinalState;
- (void)onProcessEndWithFailType:(int)a0;
- (void).cxx_destruct;

@end
