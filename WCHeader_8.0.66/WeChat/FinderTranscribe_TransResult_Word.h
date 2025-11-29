@class NSString;

@interface FinderTranscribe_TransResult_Word : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long msBegin;
@property (nonatomic) long long msEnd;

+ (void)initialize;

@end
