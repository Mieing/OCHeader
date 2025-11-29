@class NSString, NSMutableDictionary;

@interface AWEProfileUidABCenter : NSObject <AWEUserMessage, AWEProfileUidABCenterProtocol>

@property (retain, nonatomic) NSMutableDictionary *newABTestKeyValueMap;
@property (nonatomic) BOOL updateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)handleABTestChange:(id)a0;
- (void)updateABValue;
- (id)currentUserStorageKey;
- (void)resetABValue;
- (void)updateABValueForABClassName:(id)a0;
- (void)updateRawValueForABTestValue:(id)a0 abClassName:(id)a1;
- (id)newABTestDefaultKeyValueMap;
- (long long)integerValueForABClassName:(id)a0;
- (BOOL)boolValueForABClassName:(id)a0;
- (id)dictValueForABClassName:(id)a0;
- (id)arrayValueForABClassName:(id)a0;
- (double)doubleValueForABClassName:(id)a0;
- (id)stringValueForABClassName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
