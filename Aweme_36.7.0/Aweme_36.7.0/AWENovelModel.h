@class NSString, NSNumber;

@interface AWENovelModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *bookName;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) NSNumber *wordCount;
@property (copy, nonatomic) NSString *readerSchema;
@property (retain, nonatomic) NSNumber *readProgress;
@property (nonatomic) BOOL fromKnowledge;
@property (retain, nonatomic) NSNumber *readProcess;
@property (retain, nonatomic) NSNumber *serialCount;
@property (nonatomic) BOOL bookshelfInvisible;
@property (copy, nonatomic) NSString *bookshelfInvisibleTipword;
@property (copy, nonatomic) NSNumber *genre;
@property (nonatomic) long long creationStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
