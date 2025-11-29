@class RTEAttributeNode;

@interface RTETextAttachment : NSTextAttachment

@property (retain, nonatomic) RTEAttributeNode *attribute;
@property (readonly, nonatomic) unsigned int type;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attachmentFrame;

+ (id)emptyImage;

- (id)initWithAttachmentNode:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)configFrameWithWidth:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;

@end
