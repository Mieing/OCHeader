@class NSString, LVDraftTailLeaderPackage;

@interface LVDraftTailLeaderPayload : LVDraftVideoPayload {
    struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVDraftTailLeaderPackage *tailPackage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL hiddenContent;
@property (copy, nonatomic) NSString *textPrivate;

- (BOOL)isDefaultContent;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *x0; struct __shared_weak_count *x1; })a0;
- (void)updateVideoAsset;
- (id)accountInfoRenderContent;
- (id)video;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)renderContent;
- (BOOL)hasAccountInfo;

@end
