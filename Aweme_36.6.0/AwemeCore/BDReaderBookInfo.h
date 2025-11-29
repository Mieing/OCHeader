@class NSDictionary, NSString, NSArray;

@interface BDReaderBookInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSDictionary *chapterInfoDict;
@property (copy, nonatomic) NSString *css;
@property (copy, nonatomic) NSString *sourceFile;
@property (copy, nonatomic) NSString *bookPath;
@property (copy, nonatomic) NSString *txt_encoding;
@property (nonatomic) int archiveVersion;
@property (retain, nonatomic) NSString *bookId;
@property (retain, nonatomic) NSString *bookTitle;
@property (retain, nonatomic) NSArray *chapterInfoList;
@property (retain, nonatomic) NSArray *catalogInfoList;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *thumbUrl;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) long long wordCount;
@property (nonatomic) long long catalogLevelCount;
@property (copy, nonatomic) NSString *cssFile;

+ (int)getCurrentArchiveVersion;

- (unsigned long long)getIndexWithChapterId:(id)a0;
- (void)appendCatalogInfos:(id)a0;
- (id)getChapterInfoWithChapterIndex:(unsigned long long)a0;
- (id)getChapterInfoWithChapterId:(id)a0;
- (void)appendChapterInfos:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
