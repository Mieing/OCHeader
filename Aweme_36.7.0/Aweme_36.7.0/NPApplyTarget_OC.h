@class NSArray, NLEModel_OC, NSString;

@interface NPApplyTarget_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::preset::NPApplyTarget> { struct NPApplyTarget *__ptr_; struct __shared_weak_count *__cntrl_; } cppValue;
@property (readonly, nonatomic) NLEModel_OC *draft;
@property (nonatomic) BOOL useTemplateCanvasRatio;
@property (nonatomic) BOOL loopDecode;
@property (nonatomic) BOOL enablePreMVPForAllImageTemplate;
@property (nonatomic) BOOL enablePreMVPForVideoTemplate;
@property (nonatomic) BOOL enableCloneSlots;
@property (nonatomic) BOOL enableMattingSlotAdapt;
@property (nonatomic) BOOL enableAIGCTask;
@property (nonatomic) BOOL enableDynamicTemplate;
@property (copy, nonatomic) NSArray *materials;
@property (nonatomic) double layoutScale;
@property (nonatomic) struct CGPoint { double x; double y; } layoutPos;
@property (retain, nonatomic) NSString *alignMode;
@property (readonly, copy, nonatomic) NSString *templateReport;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPApplyTarget> { struct NPApplyTarget *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithDraft:(id)a0;
- (void)setNPFillMode:(unsigned long long)a0;
- (unsigned long long)getNPFillMode;
- (void)resetNPFillMode;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
