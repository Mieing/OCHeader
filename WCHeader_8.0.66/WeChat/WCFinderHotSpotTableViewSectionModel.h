@class NSData, NSMutableArray;

@interface WCFinderHotSpotTableViewSectionModel : NSObject

@property (retain, nonatomic) NSMutableArray *hotWords;
@property (retain, nonatomic) NSData *lastBuffer;

- (unsigned long long)dataCount;
- (id)hotWordAtIndex:(unsigned long long)a0;
- (void)loadLocalData;
- (BOOL)isDataEmpty;
- (void)fetchServerDataCompletion:(id /* block */)a0 failed:(id /* block */)a1;
- (void).cxx_destruct;

@end
