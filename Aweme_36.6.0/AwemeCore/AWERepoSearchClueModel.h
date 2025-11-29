@class NSString, NSArray;

@interface AWERepoSearchClueModel : NSObject <NSCopying, ACCRepositoryTrackContextDeprecated, AWERepositoryDraftProtocol, ACCRepoSearchClueModelProtocol>

@property (copy, nonatomic) NSString *clueID;
@property (copy, nonatomic) NSArray *extraPublishTagNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_publishTrackEventParams:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
