@class NSString, NSMutableArray;

@interface ACCRepoEditTextReaderModel : NSObject <ACCRepoRegister, ACCRepoModelDraftProtocol, NSCopying, ACCRepoEditTextReaderData>

@property (retain, nonatomic) NSMutableArray *textReaderModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)allTextReaderModels;
- (BOOL)hasTextReader;
- (id)fixedDraftPathFromPath:(id)a0 draftID:(id)a1;
- (void)removeTextReaderModel:(id)a0;
- (id)getTextReaderModel:(id)a0;
- (void)updateResourcePathWithDraftID:(id)a0;
- (void)addTextReaderModel:(id)a0;
- (void)setupManagerWithService:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
