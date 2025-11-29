@class NSMutableDictionary;

@interface AWEDCFeedCommonRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestModelsDict;

+ (id)shareInstance;

- (void)addDoubleColumnPlayFinishModelItemID:(id)a0 referString:(id)a1;
- (void)addDCFeedEnterFromPage:(id)a0 referString:(id)a1;
- (void)addDCFeedAwemeGid:(id)a0 referString:(id)a1;
- (id)getDoubleColumnPlayFinishModelsWithReferString:(id)a0;
- (id)getCommonRequestModelWithReferString:(id)a0;
- (id)getDCFeedAwemeGidWithReferString:(id)a0;
- (id)getDCFeedEnterFromPageWithReferString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
