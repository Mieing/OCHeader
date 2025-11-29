@class ImagePreviewV2, NSString, NSMutableArray, CompressedUrlListV2;

@interface UrlStructV2 : GPBMessage

@property (copy, nonatomic) NSString *uri;
@property (nonatomic) BOOL hasUri;
@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;
@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;
@property (copy, nonatomic) NSString *URLKey;
@property (nonatomic) BOOL hasURLKey;
@property (nonatomic) long long dataSize;
@property (nonatomic) BOOL hasDataSize;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) BOOL hasFileHash;
@property (copy, nonatomic) NSString *fileCs;
@property (nonatomic) BOOL hasFileCs;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (nonatomic) BOOL hasPlayerAccessKey;
@property (copy, nonatomic) NSString *bgimgURL;
@property (nonatomic) BOOL hasBgimgURL;
@property (retain, nonatomic) CompressedUrlListV2 *compressedURLList;
@property (nonatomic) BOOL hasCompressedURLList;
@property (retain, nonatomic) ImagePreviewV2 *coverPreview;
@property (nonatomic) BOOL hasCoverPreview;

+ (id)descriptor;

- (id)fileCs;
- (id)fileHash;
- (long long)dataSize;
- (id)URLKey;
- (id)URLListArray;
- (int)height;
- (int)width;
- (id)uri;

@end
