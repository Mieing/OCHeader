@class NSString, NSSet;
@protocol HMDDoubleReporterDelegate;

@interface HMDDoubleReporter : NSObject

@property (nonatomic) BOOL isEnabled;
@property (copy) NSString *doubleUploadHostAndPath;
@property (copy) NSSet *allowPathSet;
@property (weak, nonatomic) id<HMDDoubleReporterDelegate> delegate;

+ (id)sharedReporter;

- (void)doubleUploadRecordArray:(id)a0;
- (BOOL)shouldDoubleReport:(id)a0;
- (void).cxx_destruct;
- (void)update:(id)a0;

@end
