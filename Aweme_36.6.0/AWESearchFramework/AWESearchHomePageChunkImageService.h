@class NSString;

@interface AWESearchHomePageChunkImageService : AWESearchHomePageBaseService

@property (copy, nonatomic) NSString *gid;
@property (nonatomic) unsigned long long base64Length;
@property (nonatomic) double receiveTs;
@property (nonatomic) double hexTs;
@property (nonatomic) double imageTs;
@property (nonatomic) double mainThreadTs;
@property (nonatomic) double freshCoverTs;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (void)searchHome_handleImageChunk:(id)a0;
- (void)searchHome_onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (void)resetTs;
- (void)trackImageChunkPerf:(id)a0 imageUseType:(unsigned long long)a1;
- (id)awemeModelFor:(id)a0;
- (void)updateCellCover:(id)a0;
- (void)writeCache:(id)a0 imageUrl:(id)a1 completion:(id /* block */)a2;
- (BOOL)isCoverFromCache:(id)a0;
- (BOOL)isImageUrlCached:(id)a0;
- (id)viewModelFor:(id)a0;
- (id)dcCellFor:(id)a0;
- (id)imageUrlFor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
