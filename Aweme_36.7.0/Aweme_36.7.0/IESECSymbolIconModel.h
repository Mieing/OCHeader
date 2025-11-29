@class LynxTextareaAttachment, NSString, UIImage, IESECLynxTextView;

@interface IESECSymbolIconModel : NSObject

@property (readonly, weak, nonatomic) IESECLynxTextView *textView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *marginImage;
@property (readonly, copy, nonatomic) NSString *src;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double imageLeftMargin;
@property (readonly, nonatomic) double textLeftMargin;
@property (readonly, nonatomic) double textRightMargin;
@property (readonly, nonatomic) LynxTextareaAttachment *attchImage;

- (id)initWithParams:(id)a0 textView:(id)a1;
- (void)setupAttchImage;
- (void)drawMarginImage:(id)a0;
- (void)updateAttachImageWithLocation:(long long)a0;
- (void).cxx_destruct;

@end
