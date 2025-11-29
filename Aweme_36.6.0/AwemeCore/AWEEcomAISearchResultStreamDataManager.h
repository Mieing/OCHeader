@class NSMutableDictionary;

@interface AWEEcomAISearchResultStreamDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *appendContentDict;
@property (retain, nonatomic) NSMutableDictionary *updateCardDict;

- (id)keyForLocation:(id)a0;
- (void)appendData:(id)a0 forLocation:(id)a1;
- (id)getAppendDataListForLocation:(id)a0;
- (void)setCardData:(id)a0 forLocation:(id)a1;
- (id)getCardDataForLocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
