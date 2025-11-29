@class NSString, NSSet, NSData, NSArray, NSMutableArray;

@interface WCFinderFeedSubtitleViewModel : NSObject <WCFinderFeedSubtitleSettingViewControllerDelegate>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long subtitleId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long prefetchTimeInterval;
@property (retain, nonatomic) NSMutableArray *timeSectionArray;
@property (retain, nonatomic) NSMutableArray *requestingSectionArray;
@property (retain, nonatomic) NSMutableArray *sentenceArray;
@property (retain, nonatomic) NSSet *displayLanguageSet;
@property (retain, nonatomic) NSArray *languageArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTid:(id)a0;
- (void)addSubtitle:(id)a0;
- (id)getSentenceAtTime:(unsigned long long)a0;
- (id)getNextSentenceAtTime:(unsigned long long)a0;
- (void)requestSubtitleIfNeeded:(unsigned long long)a0 commentScene:(int)a1;
- (id)currentLanguageForReport:(id)a0;
- (BOOL)updateRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })timeLocationAtTimeSectionArray:(unsigned long long)a0 left:(long long)a1 right:(long long)a2;
- (void)requestSubtitle:(unsigned long long)a0 commentScene:(int)a1;
- (void)addSentence:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })indexOfTime:(unsigned long long)a0 left:(long long)a1 right:(long long)a2;
- (BOOL)isRequestingSubtitleAtTime:(unsigned long long)a0;
- (void)onFinderFeedSubtitleDisplayLanguageChanged:(id)a0;
- (void).cxx_destruct;

@end
