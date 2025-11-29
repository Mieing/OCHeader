@class NSString, NSMutableArray, NSData;
@protocol MMMusicSearchVideoDataProviderDelegate;

@interface MMMusicSearchVideoDataProvider : NSObject {
    NSMutableArray *_arrData;
    NSString *m_lastNsInput;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
}

@property (weak, nonatomic) id<MMMusicSearchVideoDataProviderDelegate> delegate;

- (id)init;
- (long long)numberOfItemsInSection;
- (id)cellDataAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfData:(id)a0;
- (id)getDataById:(id)a0;
- (void)clearAllData;
- (void)searchWithInput:(id)a0;
- (void)searchWithInputNextPage;
- (void)loadData:(id)a0 isFirstPage:(BOOL)a1;
- (void)notifyOnDataChanged:(BOOL)a0 isClearAll:(BOOL)a1;
- (void).cxx_destruct;

@end
