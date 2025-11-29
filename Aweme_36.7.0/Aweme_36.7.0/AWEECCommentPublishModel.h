@class NSString, AWEStudioVideoAnchorModel;

@interface AWEECCommentPublishModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryRequestParamsDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEStudioVideoAnchorModel *anchorModel;
@property (nonatomic) long long createScene;
@property (copy, nonatomic) NSString *commentText;
@property (nonatomic) long long rankType;
@property (nonatomic) long long storySourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithInfoDictionary:(id)a0;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
