@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDClassCoverageChecker : NSObject

@property BOOL isChecking;
@property (nonatomic) int count;
@property (copy, nonatomic) NSDictionary *allClassInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL swiftCheckDisable;

+ (id)encodeIntoPBDataWithDict:(id)a0;

- (void)checkClassesPeriodly;
- (void)checkAllClass;
- (void)dumpToFile;
- (void)activateByConfig:(double)a0 swiftCheckDisable:(BOOL)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;

@end
