@class NSString, NLEResource_OC, UIColor;

@interface NLETextLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::TextLayer> { struct TextLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppTextLayer;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long fontSize;
@property (retain, nonatomic) NLEResource_OC *fontResource;
@property (nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) NLEResource_OC *styleFont;
@property (nonatomic) double bend;
@property (nonatomic) double bendOffset;
@property (nonatomic) double maxLineWidth;
@property (nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL outline;
@property (nonatomic) double outlineWidth;
@property (nonatomic) UIColor *outlineColor;
@property (nonatomic) long long alignType;

- (id)initWithId:(id)a0 text:(id)a1;
- (id)initWithCPPTextLayer:(struct shared_ptr<nleimage_api::TextLayer> { struct TextLayer *x0; struct __shared_weak_count *x1; })a0;
- (id)getStyleFont;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (id).cxx_construct;

@end
