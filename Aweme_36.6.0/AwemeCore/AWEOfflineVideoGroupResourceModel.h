@class NSArray, NSMutableArray;

@interface AWEOfflineVideoGroupResourceModel : AWEOfflineVideoResourceModel <NSCoding>

@property (retain, nonatomic) NSMutableArray *singleResourceModels;
@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *modelList;

- (id)mixInfo;
- (id)awemeModels;
- (void)deleteInvalidVideoWithItemIDs:(id)a0;
- (void)deleteFile;
- (void)deleteLostFileVideoWithItemIDs:(id)a0;
- (void)appendSubResourcesModels:(id)a0;
- (void)deleteInvalidVideo;
- (void).cxx_destruct;
- (double)cacheSize;
- (double)fileSize;
- (id)initWithType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)authorID;

@end
