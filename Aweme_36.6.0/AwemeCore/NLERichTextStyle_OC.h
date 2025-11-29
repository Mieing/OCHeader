@class NSString, NSArray, NLEResourceNode_OC, NLERichTextDeco_OC, NLERichTextBloom_OC;

@interface NLERichTextStyle_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLERichTextStyle> { struct NLERichTextStyle *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) unsigned int fontSize;
@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL italic;
@property (nonatomic) BOOL underline;
@property (nonatomic) BOOL useLetterColor;
@property (nonatomic) BOOL textBackGroundEnable;
@property (nonatomic) float textBackGroundCornerRadius;
@property (nonatomic) unsigned int textBackGroundColor;
@property (retain, nonatomic) NSArray *textBackGroundExpand;
@property (retain, nonatomic) NLEResourceNode_OC *font;
@property (retain, nonatomic) NLEResourceNode_OC *effectstyle;
@property (retain, nonatomic) NLERichTextDeco_OC *fill;
@property (retain, nonatomic) NSArray *strokes;
@property (retain, nonatomic) NSArray *shadows;
@property (retain, nonatomic) NSArray *innerShadows;
@property (retain, nonatomic) NLERichTextBloom_OC *bloom;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLERichTextStyle> { struct NLERichTextStyle *x0; struct __shared_weak_count *x1; })a0;
- (void)removeStroke:(id)a0;
- (void)clearStroke;
- (void)addShadow:(id)a0;
- (void)removeShadow:(id)a0;
- (void)clearShadow;
- (void)addInnerShadow:(id)a0;
- (void)removeInnerShadow:(id)a0;
- (void)clearInnerShadow;
- (void).cxx_destruct;
- (id)init;
- (void)addStroke:(id)a0;

@end
