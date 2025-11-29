@class NSString;

@interface AWEStudioRepoFriendsModel : NSObject <ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol, ACCRepositoryTrackContextDeprecated>

@property (nonatomic) BOOL isSlideRightEnterRecord;
@property (nonatomic) BOOL isPullDownEnterRecord;
@property (copy, nonatomic) NSString *cfNoticeID;
@property (retain, nonatomic) NSString *schoolID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (id)acc_publishTrackEventParams:(id)a0;
- (id)oldSchoolIDWithExtraData:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
