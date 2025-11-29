@class NSString;

@interface CECMomentTextABHelper : NSObject <CECMomentTextABHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)maxRecordAudioSecond;
+ (BOOL)enableMomentText;
+ (BOOL)enableMomentAudioText;
+ (BOOL)currentIndexIsAudio:(long long)a0;
+ (long long)recordModeFromIdentifier:(long long)a0;
+ (void)setMomentNotesCachedTab:(unsigned long long)a0;
+ (unsigned long long)getMomentNotesCachedTab;
+ (id)segmentModeIdentifiers;
+ (id)segmentTitleDict;
+ (long long)maxInputTextCount;
+ (id)backgroundColorPairs;
+ (id)invertImageColors:(id)a0;
+ (unsigned long long)segmentIndex;
+ (id)segmentTitles;
+ (long long)showSeconds;
+ (id)tabName;


@end
