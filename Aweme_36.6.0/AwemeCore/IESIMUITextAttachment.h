@class NSAttributedString;

@interface IESIMUITextAttachment : NSTextAttachment

@property (retain, nonatomic) id attachment;
@property (copy, nonatomic) id /* block */ attachmentBlock;
@property (readonly, nonatomic) unsigned long long uiType;
@property (copy, nonatomic) NSAttributedString *backedAttributedString;
@property (nonatomic) long long contentMode;

+ (id)attachmentWithSize:(struct CGSize { double x0; double x1; })a0 alignToFont:(id)a1 content:(id)a2;
+ (id)attributedStringWithSize:(struct CGSize { double x0; double x1; })a0 alignToFont:(id)a1 contentMode:(long long)a2 attributes:(id)a3 attachmentBlock:(id /* block */)a4;
+ (id)attributedStringWithSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 attachmentBlock:(id /* block */)a2;
+ (id)attributedStringWithSize:(struct CGSize { double x0; double x1; })a0 contentMode:(long long)a1 attributes:(id)a2 attachmentBlock:(id /* block */)a3;
+ (id)attachmentWithSize:(struct CGSize { double x0; double x1; })a0 alignToFont:(id)a1 attachmentBlock:(id /* block */)a2;
+ (id)attachmentWithSize:(struct CGSize { double x0; double x1; })a0 content:(id)a1;

- (id)attributedStringWithAttributes:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addUIElementToContainer:(id)a0 attachmentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removeUIElementIfNeededFromContainer:(id)a0;
- (id)mutableAttributedStringWithAttributes:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
