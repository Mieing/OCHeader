@class IESLiveInteractSubtitleForShow, NSMapTable, IESLiveInteractSubtitle, IESLiveInteractSubtitleConfig, NSMutableSet;

@interface IESLiveInteractSubtitleViewModel : NSObject

@property (retain, nonatomic) NSMapTable *userIdToSequence;
@property (retain, nonatomic) NSMapTable *userIdToSequenceDefinite;
@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (retain, nonatomic) IESLiveInteractSubtitle *lastSubtitle;
@property (retain, nonatomic) NSMutableSet *ignoreUsers;
@property (retain, nonatomic) IESLiveInteractSubtitleForShow *firstLine;
@property (retain, nonatomic) IESLiveInteractSubtitleForShow *secondLine;
@property (retain, nonatomic) IESLiveInteractSubtitleForShow *incomingLine;
@property (nonatomic) BOOL needUpdate;
@property (nonatomic) BOOL updateLock;

- (void)resetSubtitleContent;
- (void)onNewSubtitlesArrived:(id)a0;
- (void)updateLineContent:(id)a0;
- (void)updateSingleUserLineContent:(id)a0;
- (BOOL)lineNeedSplit:(id)a0;
- (id)divideSubtitle:(id)a0;
- (id)getSubtitleLineInstance:(id)a0 content:(id)a1 empty:(BOOL)a2 definite:(BOOL)a3 line:(long long)a4;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void)setup;

@end
