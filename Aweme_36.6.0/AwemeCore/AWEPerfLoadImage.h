@class AWEPerfLoadViewInfo, NSString, NSMutableSet, UIViewController;

@interface AWEPerfLoadImage : AWEPerfLoadObject <AWEPerfLoadViewInfoObserver> {
    UIViewController *containerVC;
    AWEPerfLoadViewInfo *viewInfo;
    NSMutableSet *batchViewInfos;
    BOOL shouldCheckBatchEnd;
    double batchTimeout;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithKind:(id)a0 batchTimeout:(double)a1 viewController:(id)a2;
- (void)viewInfoDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
