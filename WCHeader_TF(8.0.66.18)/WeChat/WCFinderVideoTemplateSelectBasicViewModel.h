@class NSData, NSMutableArray, MJTemplateListParams;

@interface WCFinderVideoTemplateSelectBasicViewModel : NSObject

@property (retain, nonatomic) NSData *pageBuf;
@property (nonatomic) BOOL hasFetchData;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableArray *videoTemplatesData;
@property (retain, nonatomic) MJTemplateListParams *params;

- (id)initWithParams:(id)a0;
- (void)fetchLocalData;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)reFetchDataWithCompletion:(id /* block */)a0;
- (void)fetchDataWithPageBuf:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasMoreData;
- (long long)dataCount;
- (id)videoTemplateAtIndex:(long long)a0;
- (id)titleAtIndex:(long long)a0;
- (id)descAtIndex:(long long)a0;
- (id)videoUrlAtIndex:(long long)a0;
- (id)getCachedData;
- (void)saveCachedDataWithTemplates:(id)a0;
- (id)getMusicLyricsWording:(id)a0;
- (id)mmkvKey;
- (BOOL)hasLocalFirstTemplate;
- (id)localFirstTemplate;
- (void).cxx_destruct;

@end
