@class ACCPicTemplateModel, NSString;

@interface ACCRepoImageAlbumNoteModel : ACCRepositoryGlobalCommonModel <ACCRepoRegister, ACCRepoImageAlbumNoteData>

@property (retain, nonatomic) ACCPicTemplateModel *picTemplateModelSync;
@property (retain, nonatomic) NSString *picTemplateIdSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;
+ (long long)repo_scope;

@end
