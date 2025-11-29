@class NSString;

@interface MMFinderLiveCompleteViewReplaySettingsStandardStrategy : NSObject <MMFinderLiveCompleteViewReplaySettingsStrategy>

@property (nonatomic) BOOL replayHighlightCapable;
@property (nonatomic) BOOL replayHighlightEnabled;
@property (nonatomic) BOOL commentConversionEnabled;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) unsigned long long applicableOptions;
@property (nonatomic) BOOL membersExclusiveEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReplayHighlightCapability:(BOOL)a0;

@end
