@class IESLiveKRCWord, IESLiveKRCSentence;

@interface IESLiveKTVLyricViewWordResultModel : NSObject

@property (retain, nonatomic) IESLiveKRCSentence *sentence;
@property (nonatomic) long long row;
@property (nonatomic) double wordOffset;
@property (retain, nonatomic) IESLiveKRCWord *word;
@property (nonatomic) long long wordIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } wordRange;
@property (nonatomic) double wordProgress;

- (void).cxx_destruct;

@end
