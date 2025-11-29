@class FinderTranscribe_TransResult_LangIDScore, NSString, NSData, NSMutableArray;

@interface FinderTranscribe_TransResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *sents;
@property (retain, nonatomic) NSData *srt;
@property (retain, nonatomic) NSMutableArray *vadsegs;
@property (retain, nonatomic) NSMutableArray *spksegs;
@property (retain, nonatomic) NSString *langidLang;
@property (retain, nonatomic) FinderTranscribe_TransResult_LangIDScore *langidScore;
@property (retain, nonatomic) FinderTranscribe_TransResult_LangIDScore *langidProportion;
@property (retain, nonatomic) NSData *textTranslation;
@property (nonatomic) int sedRet;
@property (retain, nonatomic) NSMutableArray *sedsegs;
@property (retain, nonatomic) NSMutableArray *langidsegs;
@property (nonatomic) BOOL isSubtitle;

+ (void)initialize;

@end
