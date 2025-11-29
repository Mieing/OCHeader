@class NSString;

@interface AWERepoGameModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryRequestParamsDeprecated, ACCRepositoryTrackContextDeprecated, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long gameType;
@property (nonatomic) long long game2DScore;
@property (nonatomic) BOOL publishBackToGame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
