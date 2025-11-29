@class AWEHPChannelBadgeTaskPackage, NSMutableDictionary, NSDictionary, AWEHPChannelBadgeCallContext;
@protocol AWEPzComponentProtocol, AWEPzVerifyResultProtocol;

@interface AWEHPChannelBadgeTask : NSObject

@property (nonatomic) BOOL hasInvokeShowBlock;
@property (nonatomic) BOOL hasInvokePreCheckBlock;
@property (nonatomic) BOOL hasInvokeHideBlock;
@property (nonatomic) BOOL hasInvokeDowngradeBlock;
@property (nonatomic) double showTimeStamp;
@property (nonatomic) double hideTimeStamp;
@property (nonatomic) double downgradeTimeStamp;
@property (nonatomic) double CAMediaShowTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *verifyExtraDict;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isShowing;
@property (nonatomic) BOOL hasVerifyPizza;
@property (retain, nonatomic) AWEHPChannelBadgeCallContext *context;
@property (copy, nonatomic) id /* block */ preCheckBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ hideBlock;
@property (copy, nonatomic) id /* block */ downgradeBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) AWEHPChannelBadgeTaskPackage *componentPackage;
@property (readonly, weak, nonatomic) id<AWEPzComponentProtocol> component;
@property (nonatomic) BOOL componentNeedAdd;
@property (nonatomic) BOOL componentNeedRemove;
@property (nonatomic) BOOL hasEnterConsume;
@property (nonatomic) BOOL isPreCheckTask;
@property (retain, nonatomic) NSDictionary *interceptedParams;
@property (retain, nonatomic) id<AWEPzVerifyResultProtocol> verifyResult;
@property (retain, nonatomic) NSMutableDictionary *triggerInfoDict;
@property (nonatomic) long long downgradedType;
@property (nonatomic) long long hideType;
@property (nonatomic) unsigned long long reduceReason;
@property (nonatomic) BOOL downgradeFirstShow;
@property (weak, nonatomic) AWEHPChannelBadgeTask *previousShowBadgeTask;

+ (id)createTask;

- (void)closeTask;
- (void)addExtraInfoWithError:(id)a0 extraInfo:(id)a1;
- (void)invokePrecheckBlockWithResult:(long long)a0 downgradeType:(long long)a1;
- (void)invokeShowBlockWithResult:(long long)a0;
- (void)invokeHideBlockWithType:(long long)a0;
- (void)invokeDowngradeBlockWithType:(long long)a0;
- (void)reuseWithOldTask:(id)a0;
- (void)addComponentInfo:(id)a0 info:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithTaskID:(long long)a0;

@end
