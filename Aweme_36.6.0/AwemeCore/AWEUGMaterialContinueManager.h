@class AWEUGMaterialContinueModel, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUGMaterialContinueManager : NSObject

@property (nonatomic) double timeoutThreshold;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) long long popupShowCount;
@property (nonatomic) long long popupShowOrder;
@property (nonatomic) double beginTime;
@property (nonatomic) long long agreeCostTime;
@property (nonatomic) BOOL hasAlreadySuccessed;
@property (retain, nonatomic) AWEUGMaterialContinueModel *model;

+ (id)sharedInstance;

- (void)showPopup;
- (void)showPopupAfterShowOrder;
- (void)requestMaterialContinueResponseAndPopup:(double)a0;
- (id)translateJson2String:(id)a0;
- (void)asyncSetBool:(id)a0 value:(BOOL)a1;
- (void)redirect:(id)a0 costTime:(long long)a1 logExtra:(id)a2 agreeCostTime:(long long)a3;
- (void)popupNative:(id)a0 beginTime:(double)a1 logExtra:(id)a2;
- (void)popupLynx:(id)a0 responseData:(id)a1 logExtra:(id)a2;
- (void)popupNormalize:(id)a0 beginTime:(double)a1 logExtra:(id)a2;
- (void)awe_storageGDLabel:(id)a0 activeTime:(double)a1;
- (void)awe_storageCids:(id)a0 activeTime:(double)a1;
- (void)openSchema:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkPopInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)begin:(double)a0;

@end
