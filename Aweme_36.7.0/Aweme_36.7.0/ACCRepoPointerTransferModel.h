@class NSString, NSMutableDictionary, ACCRepoPointerTransferFieldsModel;
@protocol ACCPublishRepository;

@interface ACCRepoPointerTransferModel : NSObject <NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated>

@property (retain, nonatomic) NSMutableDictionary *referExtra;
@property (retain, nonatomic) ACCRepoPointerTransferFieldsModel *fields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

- (id)acc_publishRequestParams:(id)a0;
- (id)acc_referExtraParams;
- (void)appendReferExtraWithDict:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
