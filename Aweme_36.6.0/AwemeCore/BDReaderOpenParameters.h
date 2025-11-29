@class NSString, BDReaderTextPosition, NSDictionary, NSNumber;

@interface BDReaderOpenParameters : NSObject

@property (copy, nonatomic) NSString *firstOpenChapterId;
@property (nonatomic) unsigned long long firstOpenChapterIndex;
@property (nonatomic) unsigned long long firstOpenPageIndex;
@property (retain, nonatomic) NSNumber *firstOpenTextPageIndex;
@property (retain, nonatomic) NSNumber *firstOpenTextLocation;
@property (retain, nonatomic) BDReaderTextPosition *firstOpenTextPosition;
@property (copy, nonatomic) id /* block */ firstOpenChapterIndexConfigBlock;
@property (copy, nonatomic) NSString *firstOpenParaSrcId;
@property (nonatomic) unsigned long long changeFrom;
@property (copy, nonatomic) NSString *firstOpenSearchWord;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;
- (id)description;

@end
