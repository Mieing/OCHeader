@class NSString;

@interface IESLiveAnchorVisibleScopePreferenceIMP : NSObject <IESLiveVisibleScopePreferenceService>

@property (readonly, nonatomic) BOOL isEntryShownBefore;
@property (nonatomic) unsigned long long visibleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markEntryShown;

@end
