@class NSString, MMKV;

@interface AWEPadRotateGuideAdapter : NSObject <AWEPadRotateGuideAdapter>

@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) long long showCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (BOOL)Enable;

- (void)cachePadRotateEntryViewShowCountFromAB;
- (void)updateEntryViewShowCountForPadWithItemID:(id)a0 completion:(id /* block */)a1;
- (BOOL)isFinishShowTimes;
- (BOOL)shouldUpdateEntryViewUIForPad;
- (id)rotateGuideABTestRawDict;
- (void).cxx_destruct;
- (id)weakTarget;

@end
