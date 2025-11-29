@class NSString;

@interface AWEConcernAccuracyReporter : NSObject <AWEConcernAccuracyReporterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackCountAccuracyWithParam:(id)a0;
+ (void)trackRemindAccuracyWithParam:(id)a0;
+ (void)trackYellowDotAccuracyWithParam:(id)a0;
+ (void)trackAccuracyWithFollowStatus:(long long)a0 previousFollowStatus:(long long)a1 enterFrom:(id)a2;


@end
