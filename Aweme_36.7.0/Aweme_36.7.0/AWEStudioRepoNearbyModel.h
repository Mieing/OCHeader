@class NSString;

@interface AWEStudioRepoNearbyModel : NSObject <NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryClipContextProtocol, AWERepositoryDraftProtocol>

@property (retain, nonatomic) NSString *publishTitleHint;
@property (nonatomic) BOOL isFromNearby;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)willEnterEditPageFromClipPage:(id)a0 originalPublishModel:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
