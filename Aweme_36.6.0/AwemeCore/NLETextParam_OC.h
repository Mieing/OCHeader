@class UIColor;

@interface NLETextParam_OC : NSObject

@property (nonatomic) struct shared_ptr<nleimage_api::TextParam> { struct TextParam *__ptr_; struct __shared_weak_count *__cntrl_; } cppTextParam;
@property (nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL outline;
@property (nonatomic) double outlineWidth;
@property (nonatomic) UIColor *outlineColor;
@property (nonatomic) long long alignType;

- (id)getForegroundColor;
- (id)getStyleFont;
- (void)setStyleFont:(id)a0;
- (id)initWithCPPTextParam:(struct shared_ptr<nleimage_api::TextParam> { struct TextParam *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (void)setForegroundColor:(id)a0;
- (void)setFont:(id)a0;
- (id).cxx_construct;
- (id)getFont;

@end
