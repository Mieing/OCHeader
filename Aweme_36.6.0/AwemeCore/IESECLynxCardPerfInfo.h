@class NSString, NSDictionary, NSSet;

@interface IESECLynxCardPerfInfo : NSObject

@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSDictionary *resPerf;
@property (copy, nonatomic) NSDictionary *setupTiming;
@property (copy, nonatomic) NSDictionary *updateTiming;
@property (copy, nonatomic) NSSet *updateFlag;
@property (nonatomic) long long setupDrawEnd;
@property (nonatomic) long long updateDrawEnd;

+ (id)perfInfoWithSetupInfo:(id)a0 updateTiming:(id)a1 resource:(id)a2;

- (id)ssr_getSetupSsrTiming;
- (BOOL)ssr_isSsrTiming;
- (id)ssr_getUpdateSsrTiming;
- (long long)ssr_setupDrawEndSsr;
- (long long)ssr_updateDrawEndSsr;
- (id)initWithSetupInfo:(id)a0 updateTiming:(id)a1 resource:(id)a2;
- (void)parseSetupTiming:(id)a0;
- (void)parseUpdateTiming:(id)a0;
- (void)parseResPerf:(id)a0;
- (void).cxx_destruct;

@end
