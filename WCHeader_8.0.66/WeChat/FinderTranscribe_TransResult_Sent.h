@class NSString, NSMutableArray;

@interface FinderTranscribe_TransResult_Sent : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long msBegin;
@property (nonatomic) long long msEnd;
@property (retain, nonatomic) NSMutableArray *words;
@property (nonatomic) int spkTag;
@property (nonatomic) int emoTag;
@property (retain, nonatomic) NSMutableArray *translation;

+ (void)initialize;

@end
