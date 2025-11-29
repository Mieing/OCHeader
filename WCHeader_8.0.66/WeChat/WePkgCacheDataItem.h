@class NSData, NSString, NSMutableArray;

@interface WePkgCacheDataItem : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *pkgId;
@property (retain, nonatomic) NSString *rid;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSString *textEncodingName;
@property (retain, nonatomic) NSMutableArray *extraHeaderList;

+ (id)responseFromUrl:(id)a0 cacheItem:(id)a1 pkgData:(id)a2;

- (id)getFileData;
- (id)fileNameFromRid:(id)a0;
- (void)loadFileData:(id)a0;
- (void).cxx_destruct;

@end
