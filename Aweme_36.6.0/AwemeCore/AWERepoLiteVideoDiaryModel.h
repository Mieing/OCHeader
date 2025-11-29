@class NSString;

@interface AWERepoLiteVideoDiaryModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryRequestParamsDeprecated, ACCRepositoryClipContextProtocol, ACCRepositorySelectPhotoContextProtocol, NSCopying>

@property (nonatomic) long long themeID;
@property (nonatomic) long long diaryType;
@property (copy, nonatomic) NSString *major;
@property (copy, nonatomic) NSString *minor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)willEnterEditPageFromClipPage:(id)a0 originalPublishModel:(id)a1;
- (void)storyPhotoDidClickedNextWithImage:(id)a0 publishViewModel:(id)a1 originalPublishModel:(id)a2;
- (void)setupWithInfo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
