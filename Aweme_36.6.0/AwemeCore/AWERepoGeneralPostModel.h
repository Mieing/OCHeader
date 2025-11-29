@class NSString, NSArray;

@interface AWERepoGeneralPostModel : NSObject <ACCRepoModelDraftProtocol>

@property (copy, nonatomic) NSString *themeID;
@property (copy, nonatomic) NSString *themeTitle;
@property (copy, nonatomic) NSString *storyCategory;
@property (copy, nonatomic) NSString *categoryID;
@property (copy, nonatomic) NSArray *themeTemplates;
@property (copy, nonatomic) NSString *generalPostLevel;
@property (copy, nonatomic) NSString *generalPostReason;
@property (readonly, nonatomic) BOOL isGeneralPost;
@property (copy, nonatomic) NSString *mvId;
@property (copy, nonatomic) NSString *mvType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;

- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (id)acc_publishTrackEventParams:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
