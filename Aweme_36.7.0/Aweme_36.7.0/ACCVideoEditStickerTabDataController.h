@class NSArray, ACCStickerCategoryModel, ACCStickerPannelDataConfig, ACCVideoEditStickerTabUIConfig;
@protocol ACCNetworkReachabilityProtocol;

@interface ACCVideoEditStickerTabDataController : NSObject

@property (retain, nonatomic) ACCStickerCategoryModel *model;
@property (retain, nonatomic) id<ACCNetworkReachabilityProtocol> networkReachability;
@property (copy, nonatomic) NSArray *innerModels;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (retain, nonatomic) ACCVideoEditStickerTabUIConfig *uiConfig;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long sortingPosition;

- (id)cellIdentifierAtIndexPath:(id)a0;
- (id)initWithCategoryModel:(id)a0;
- (void)fetchCategoryDataWithCompletion:(id /* block */)a0;
- (long long)dataCountAtSection:(unsigned long long)a0;
- (BOOL)isFunctionSticker:(id)a0;
- (id)cellIdentifiers;
- (Class)cellClassForIdentifier:(id)a0;
- (void)fetchCategoryMoreDataWithCompletion:(id /* block */)a0;
- (void)downloadStickerWithCategory:(id)a0 atIndex:(long long)a1 downloadProgressBlock:(id /* block */)a2 downloadedBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dataRequest;
- (long long)dataCount;
- (BOOL)shouldFetchData;

@end
