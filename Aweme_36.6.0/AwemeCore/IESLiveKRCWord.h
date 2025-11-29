@class NSString;

@interface IESLiveKRCWord : NSObject <NSCopying>

@property (nonatomic) double loc;
@property (nonatomic) double duration;
@property (nonatomic) double thirdTime;
@property (copy, nonatomic) NSString *word;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInSentence;
@property (retain, nonatomic) IESLiveKRCWord *nextWord;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
