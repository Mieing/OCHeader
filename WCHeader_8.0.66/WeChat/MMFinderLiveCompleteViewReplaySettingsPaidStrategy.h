@class NSString;

@interface MMFinderLiveCompleteViewReplaySettingsPaidStrategy : NSObject <MMFinderLiveCompleteViewReplaySettingsStrategy>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) unsigned long long applicableOptions;
@property (nonatomic) BOOL replayHighlightEnabled;
@property (nonatomic) BOOL commentConversionEnabled;
@property (nonatomic) BOOL membersExclusiveEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
