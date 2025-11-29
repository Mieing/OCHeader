@class NSString, NSDictionary, BDPNovelStorageStatistics;

@interface BDPNovelStorageParam : NSObject

@property (nonatomic) long long dataSize;
@property (nonatomic) double calCost;
@property (copy, nonatomic) NSString *dataTypeStr;
@property (copy, nonatomic) NSString *cacheTypeStr;
@property (nonatomic) long long cacheType;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *bookId;
@property (nonatomic) BOOL sensitiveWordChecked;
@property (retain, nonatomic) BDPNovelStorageStatistics *statistics;
@property (nonatomic) BOOL noLRU;

- (long long)contentsStartIndex;
- (long long)contentsUpdateLength;
- (id)userContentsStatusChapterId;
- (void)updateDataType:(id)a0;
- (void)updateCacheType:(id)a0;
- (long long)contentsTotalLength;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (long long)size;

@end
