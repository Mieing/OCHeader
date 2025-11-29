@class HMDOTSpan, NSMutableDictionary, NSLock;

@interface AWELaunchSpanManager : NSObject

@property (retain, nonatomic) HMDOTSpan *mainTheadFoundtionGroupSpan;
@property (retain, nonatomic) HMDOTSpan *asynTheadFoundtionGroupSpan;
@property (retain, nonatomic) NSMutableDictionary *mainSpanItemsDict;
@property (retain, nonatomic) NSMutableDictionary *asynSpanItemsDict;
@property (nonatomic) BOOL needCustomFinish;
@property (retain, nonatomic) NSLock *asynLock;
@property (nonatomic) BOOL isFinished;

+ (void)resetLoadDate:(id)a0;
+ (void)startWithCustomFinish:(BOOL)a0;
+ (void)customFinish;
+ (id)shareManager;
+ (void)endEndLaunchFoundationSpanGroup;
+ (void)endSpanOfFoundationGroup:(id)a0;
+ (id)startChildSpanOfFoundationGroup:(id)a0;
+ (void)endSpanOfFoundationGroupWithName:(id)a0;
+ (id)startSubSpanOfFoundationItem:(id)a0 parentName:(id)a1;
+ (void)endLoadToDidFinishLaunchSpan;

- (id)parentSpanOfFoundationGroup:(BOOL)a0;
- (BOOL)checkIsFinised:(BOOL)a0;
- (id)createLaunchSpan:(id)a0 parentSpan:(id)a1;
- (id)spanItemOfFoundationGroup:(id)a0 mainThead:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
