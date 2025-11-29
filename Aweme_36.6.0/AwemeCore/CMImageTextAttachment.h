@class NSURL, NSURLSessionDataTask, NSTextContainer;

@interface CMImageTextAttachment : NSTextAttachment {
    NSTextContainer *_textContainer;
}

@property (nonatomic) BOOL isImageLoaded;
@property (retain, nonatomic) NSURLSessionDataTask *downloadTask;
@property (readonly, nonatomic) NSURL *imageURL;

+ (id)placeholderImage;

- (void)setImageWithData:(id)a0;
- (void).cxx_destruct;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (id)initWithImageURL:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;

@end
