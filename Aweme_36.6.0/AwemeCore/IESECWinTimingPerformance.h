@class NSDictionary, NSMutableSet, NSMutableDictionary;

@interface IESECWinTimingPerformance : NSObject {
    NSMutableSet *_setupLynxCards;
    NSMutableSet *_updateLynxCards;
    NSMutableDictionary *_setupFinishPerfInfoDict;
    NSMutableDictionary *_updateFinishPerfInfoDict;
}

@property (nonatomic) double pageShowWithLynxT;
@property (nonatomic) double pageShowWithLynxSsrT;
@property (nonatomic) long long lastLynxCardType;
@property (nonatomic) BOOL isLastLynxCardPreload;
@property (copy, nonatomic) NSDictionary *lastLynxCardResPerf;
@property (nonatomic) BOOL hasPerfReport;
@property (nonatomic) BOOL hasPerfLynxReport;
@property (nonatomic) BOOL isLynxTimeOut;

+ (id)getLynxCategoryWithPerfInfoDict:(id)a0;

- (BOOL)shouldReportPerfLynxRender;
- (id)getPerfMetric;
- (id)getPerfCategory;
- (void)lynxCardWillLoad:(id)a0 isUpdate:(BOOL)a1;
- (BOOL)lynxCardDidLoad:(id)a0 perfInfo:(id)a1 isUpdate:(BOOL)a2 isPreloader:(BOOL)a3;
- (id)PerfInfoDict:(BOOL)a0;
- (id)lynxCards:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
