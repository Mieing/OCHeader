@class NSString, NSMutableArray;

@interface ComponentUrlStructV2 : GPBMessage

@property (copy, nonatomic) NSString *uri;
@property (nonatomic) BOOL hasUri;
@property (retain, nonatomic) NSMutableArray *URLListArray;
@property (readonly, nonatomic) unsigned long long URLListArray_Count;
@property (nonatomic) long long dataSize;
@property (nonatomic) BOOL hasDataSize;
@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;
@property (copy, nonatomic) NSString *URLKey;
@property (nonatomic) BOOL hasURLKey;
@property (copy, nonatomic) NSString *fileHash;
@property (nonatomic) BOOL hasFileHash;
@property (copy, nonatomic) NSString *fileCs;
@property (nonatomic) BOOL hasFileCs;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (nonatomic) BOOL hasPlayerAccessKey;

+ (id)descriptor;

@end
