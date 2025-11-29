@class NSString, NSArray;

@interface BDReaderChapterInfo : NSObject <NSCoding>

@property (nonatomic) long long chapterNumber;
@property (retain, nonatomic) NSString *chapterName;
@property (retain, nonatomic) NSString *chapterId;
@property (copy, nonatomic) NSString *epub_idref;
@property (copy, nonatomic) NSString *epub_href;
@property (nonatomic) int txt_start;
@property (nonatomic) int txt_len;
@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSString *chapterTitle;
@property (copy, nonatomic) NSString *chapterVolume;
@property (copy, nonatomic) NSString *chapterContent;
@property (copy, nonatomic) NSArray *paragraphInfos;

+ (id)chapterInfoWithChapterId:(id)a0 index:(unsigned long long)a1;

- (id)getParagraphInfoWithParaId:(id)a0;
- (id)initWithChapterId:(id)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
