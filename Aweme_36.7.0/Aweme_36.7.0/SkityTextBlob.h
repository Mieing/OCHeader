@class NSArray, NSAttributedString, SkityPaint;

@interface SkityTextBlob : NSObject {
    struct shared_ptr<skity::TextBlob> { struct TextBlob *__ptr_; struct __shared_weak_count *__cntrl_; } _blob;
}

@property (retain) NSAttributedString *string;
@property (readonly, nonatomic) SkityPaint *paint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) NSArray *attachments;

- (id)initWithString:(id)a0 context:(id)a1 font:(id)a2 attachments:(id)a3;
- (id)initWithString:(id)a0 context:(id)a1;
- (id)initWithString:(id)a0 context:(id)a1 font:(id)a2;
- (void).cxx_destruct;
- (void *)handler;
- (id).cxx_construct;

@end
