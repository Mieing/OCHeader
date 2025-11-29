@class IESLiveKRCWord, RACSubject, RACSignal, IESLiveKRCSentence, NSNumber;

@interface IESLiveKRCSentenceTimeSource : NSObject

@property (retain, nonatomic) IESLiveKRCSentence *nowSentence;
@property (retain, nonatomic) IESLiveKRCWord *nowWord;
@property (retain, nonatomic) RACSubject *rollSubject;
@property (retain, nonatomic) RACSubject *reloadSubject;
@property (retain, nonatomic) RACSubject *updateProgressSubject;
@property (retain, nonatomic) RACSubject *noMoreSentenceSubject;
@property (nonatomic) double earlyScrollTime;
@property (nonatomic) BOOL filterProgressFallback;
@property (retain, nonatomic) NSNumber *nowWordProgress;
@property (nonatomic) double songCurrentDuration;
@property (readonly, nonatomic) RACSignal *reloadSignal;
@property (readonly, nonatomic) RACSignal *rollSignal;
@property (copy, nonatomic) id /* block */ updaterogressBlock;
@property (readonly, nonatomic) RACSignal *noMoreSentenceSignal;

- (void)checkNextSentence:(BOOL)a0;
- (void)checkNextWord;
- (void)startWithSentence:(id)a0;
- (void)startWithWholeSong:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateProgress;
- (void)dealloc;

@end
