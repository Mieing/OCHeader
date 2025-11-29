@class NSMutableArray, GiftNewCustomizationMagicRewardResource;

@interface MMLiveMagicRewardResourceCheckTask : NSObject

@property (nonatomic) BOOL isChecking;
@property (retain, nonatomic) GiftNewCustomizationMagicRewardResource *magicRewardResource;
@property (nonatomic) unsigned long long currResourceState;
@property (retain, nonatomic) NSMutableArray *callbackObjList;
@property (copy, nonatomic) id /* block */ resourceStateChangeCallback;

- (id)initWithMagicRewardResource:(id)a0;
- (void)addCheckCallback:(id /* block */)a0 maxWaitTime:(double)a1;
- (void)invokeCallbacksWithRet:(unsigned long long)a0;
- (void)updateMagicRewardResourceIfNeeded:(id)a0;
- (void)reset;
- (void)clearAllCallbacks;
- (void)updateResourceState:(unsigned long long)a0;
- (BOOL)isFitResourceUrl:(id)a0 md5:(id)a1;
- (BOOL)startCheck;
- (BOOL)endCheckWithResult:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
