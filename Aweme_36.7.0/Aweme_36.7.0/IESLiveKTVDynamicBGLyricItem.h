@class IESLiveKRCWord, IESLiveKRCSentence;

@interface IESLiveKTVDynamicBGLyricItem : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) double end;
@property (nonatomic) double gap;
@property (nonatomic) double startShowingTime;
@property (nonatomic) double finishShowingTime;
@property (copy, nonatomic) id /* block */ willShowAction;
@property (copy, nonatomic) id /* block */ willHideAction;
@property (nonatomic) long long position;
@property (nonatomic) BOOL delay;
@property (retain, nonatomic) IESLiveKRCSentence *sentence;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) long long index;
@property (nonatomic) double wordOffset;
@property (retain, nonatomic) IESLiveKRCWord *word;
@property (nonatomic) long long wordIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } wordRange;
@property (nonatomic) double wordProgress;

- (void).cxx_destruct;

@end
