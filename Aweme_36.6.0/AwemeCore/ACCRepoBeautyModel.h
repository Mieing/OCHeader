@class NSString, NSDictionary, NSArray;

@interface ACCRepoBeautyModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryRequestParamsDeprecated, NSCopying, ACCRepositoryTrackContextDeprecated, ACCRepoBeautyData, ACCRepoRegister>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *lastSelectBeautyCategoryId;
@property (copy, nonatomic) NSDictionary *selectedBeautyDic;
@property (copy, nonatomic) NSDictionary *beautyValueDic;
@property (copy, nonatomic) NSDictionary *selectedAlbumDic;
@property (readonly, copy, nonatomic) NSArray *recordBeautyNames;
@property (readonly, copy, nonatomic) NSArray *recordBeautyValues;
@property (copy, nonatomic) NSDictionary *recordStyleInfo;
@property (readonly, copy, nonatomic) NSString *recordBeautyNamesString;
@property (readonly, copy, nonatomic) NSArray *editBeautyNames;
@property (readonly, copy, nonatomic) NSArray *editBeautyValues;
@property (readonly, copy, nonatomic) NSString *editBeautyNamesString;
@property (nonatomic) BOOL userHasChangedBeautyEffect;
@property (copy, nonatomic) NSArray *appliedEffectIds;
@property (nonatomic) long long gender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (BOOL)isUsingBeauty;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (BOOL)isUsingEditBeautyWithPublishViewModel:(id)a0;
- (void)updateRecordTrackInfo:(id)a0 recordBeautyValues:(id)a1;
- (void)updateEditTrackInfo:(id)a0 editBeautyValues:(id)a1;
- (id)p_generateBeautifyNamesStringWithBeautyNames:(id)a0;
- (id)p_generateBeautyInfoForPublish:(id)a0 beautyValues:(id)a1;
- (BOOL)hadUseBeauty;
- (void)updateRecordTrackInfo:(id)a0 recordBeautyValues:(id)a1 recordStyleInfo:(id)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
