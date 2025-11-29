@class NSString;

@interface BDReaderImageAttachment : BDReaderPlaceholderAttachment

@property (copy, nonatomic) NSString *src;
@property (nonatomic) BOOL isNormalImage;

- (void)updateWithParams:(id)a0 maxDisplaySize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsKeepingAspectRatio:(struct CGSize { double x0; double x1; })a0 sizeToFit:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
