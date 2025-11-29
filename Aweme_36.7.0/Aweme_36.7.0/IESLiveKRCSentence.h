@class NSArray, NSString;

@interface IESLiveKRCSentence : NSObject <NSCopying>

@property (nonatomic) double loc;
@property (nonatomic) double duration;
@property (nonatomic) double end;
@property (copy, nonatomic) NSArray *words;
@property (copy, nonatomic) NSString *sentenceStr;
@property (weak, nonatomic) IESLiveKRCSentence *prevSentence;
@property (retain, nonatomic) IESLiveKRCSentence *nextSentence;
@property (nonatomic) unsigned long long row;
@property (copy, nonatomic) NSString *lyricOriginString;
@property (retain, nonatomic) IESLiveKRCSentence *originSentence;
@property (nonatomic) unsigned long long originLyricType;

+ (id)defaultSentence;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
