@class NSUserDefaults, NSMutableDictionary, AMapNetworkFailModel, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMapNetWorkPerformanceManager : NSObject

@property (retain, nonatomic) NSMutableArray *successModelQueue;
@property (retain, nonatomic) NSMutableArray *failedModelQueue;
@property (retain, nonatomic) NSMutableDictionary *uploadingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gcdQueue;
@property (retain, nonatomic) AMapNetworkFailModel *lastFailModel;
@property (retain, nonatomic) NSMutableDictionary *staticDomainOccureErrorDic;
@property (retain, nonatomic) NSUserDefaults *netWorkUserDefault;

+ (id)defaultManager;

- (id)getFailModel;
- (id)getPerformanceModel;
- (void)requestCompleteWithError:(id)a0 failModel:(id)a1 sucModel:(id)a2;
- (id)initWithSinglton;
- (void)updateFailQueue:(id)a0;
- (void)updateSuccessQueue:(id)a0;
- (BOOL)isSameDay:(id)a0 date2:(id)a1;
- (void)addPerformanceModel:(id)a0;
- (void)updateStaticDomainOccureError:(id)a0;
- (BOOL)canUseStaticDomain:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
