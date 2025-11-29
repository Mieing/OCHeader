@class IESFeatureInfoRecorder, NSString, IESFeatureKeyHistoryRecorder;

@interface IESHistoryFeedFeatureInfoHelper : NSObject

@property (retain, nonatomic) IESFeatureKeyHistoryRecorder *keyRecorder;
@property (weak, nonatomic) IESFeatureInfoRecorder *infoRecorder;
@property (copy, nonatomic) NSString *prefix;

- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (id)getLastRangeInfoList:(long long)a0 key:(id)a1 excludeThis:(BOOL)a2;
- (id)initWithGroupName:(id)a0 prefix:(id)a1 maxSaveCnt:(long long)a2 minSaveGapMs:(long long)a3;
- (void)addToLastIfNotExist:(id)a0;
- (id)getInfoWithID:(id)a0;
- (id)getLastItemID;
- (id)getOrCreateFeatureInfoWithID:(id)a0 addToLast:(BOOL)a1;
- (id)getOrCreateFeatureInfoWithID:(id)a0;
- (void).cxx_destruct;
- (void)saveData;

@end
