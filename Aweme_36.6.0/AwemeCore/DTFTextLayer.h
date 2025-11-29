@class NSAttributedString;

@interface DTFTextLayer : CATextLayer {
    NSAttributedString *_attrString;
}

@property (copy, nonatomic) NSAttributedString *attrStr;

- (struct CGSize { double x0; double x1; })stringSize;
- (void).cxx_destruct;
- (id)init;

@end
