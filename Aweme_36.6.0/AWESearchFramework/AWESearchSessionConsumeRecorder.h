@class NSMutableArray, NSMutableDictionary;

@interface AWESearchSessionConsumeRecorder : NSObject

@property (retain, nonatomic) NSMutableArray *displayedConsumeModels;
@property (retain, nonatomic) NSMutableDictionary *consumeModelsMappingDic;
@property (copy, nonatomic) id /* block */ currentAllBusinessModelsBlock;

- (void)updateDisplayTypeWithModel:(id)a0;
- (void)flushWithModels:(id)a0 docFeatures:(id)a1;
- (void)flushDisplayTypeWithCurrentIndex:(unsigned long long)a0;
- (id)getSearchResultRawDataWithModels:(id)a0;
- (id)getDocListLogRawDataWithModels:(id)a0;
- (id)getSessionConsumeRawDataWithRecentListSize:(unsigned long long)a0;
- (id)p_identifierWithModel:(id)a0;
- (id)p_currentBusinessModels;
- (void).cxx_destruct;
- (id)init;
- (void)cleanUp;

@end
