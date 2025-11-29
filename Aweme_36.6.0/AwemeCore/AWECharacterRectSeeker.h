@class NSTextContainer, NSLayoutManager, NSTextStorage;

@interface AWECharacterRectSeeker : NSObject

@property (retain, nonatomic) NSTextStorage *textStorage;
@property (retain, nonatomic) NSLayoutManager *layoutManager;
@property (retain, nonatomic) NSTextContainer *textContainer;

- (void)configWithModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })characterRectAtIndex:(unsigned long long)a0;
- (void)setupBasic;
- (void).cxx_destruct;
- (id)init;

@end
