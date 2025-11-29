@class NSString;

@interface IESIMBizEntryService : HTSService <IESIMBizEntryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bizEntryUIManager;
- (id)bizEntryBadgeConsistencyPlugin;

@end
