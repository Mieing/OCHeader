@class NSArray, LVDeleteBeats, LVAIBeats;

@interface LVDraftBeatsPayload : LVDraftPayload <LVCopying> {
    struct shared_ptr<CutSame::MaterialBeat> { struct MaterialBeat *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) LVDeleteBeats *userDeleteAIBeats;
@property (retain, nonatomic) NSArray *userPoints;
@property (retain, nonatomic) NSArray *aiPoints;
@property (retain, nonatomic) LVAIBeats *aiBeats;
@property (nonatomic) BOOL enableAiBeats;
@property (nonatomic) long long gear;
@property (nonatomic) long long modeInteger;
@property (copy, nonatomic) NSArray *userBeatsPrivate;
@property (retain, nonatomic) LVDeleteBeats *userDeleteAIBeatsPrivate;

+ (id)convertPointsWithDict:(id)a0;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialBeat> { struct MaterialBeat *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::MaterialBeat> { struct MaterialBeat *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)copyCategoryToNewObject:(id)a0;
- (id)selectedAIPoints:(id)a0;
- (id)initWitPayloadID:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialBeat> { struct MaterialBeat *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
