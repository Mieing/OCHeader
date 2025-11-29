@class NSString, NSMutableArray, NSData;

@interface ACCRepoEditEffectModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *displayTimeRanges;
@property (retain, nonatomic) NSData *displayTimeRangesJson;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
