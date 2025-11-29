@class NSDictionary, NSString;

@interface GXImageNode : GXViewNode {
    double _imgWidth;
    double _imgHeight;
    BOOL _isNeedReload;
    BOOL _sizeDidChanged;
}

@property (retain, nonatomic) NSDictionary *imgData;
@property (retain, nonatomic) NSString *modeType;
@property (nonatomic) long long contentMode;

- (void)bindData:(id)a0;
- (void)configureStyleInfo:(id)a0;
- (void)handleExtend:(id)a0 isCalculate:(BOOL)a1;
- (id)creatView;
- (void)calculateWithData:(id)a0;
- (BOOL)isValidImageData;
- (void)setImageView:(id)a0 withImageInfo:(id)a1;
- (void).cxx_destruct;
- (void)renderView:(id)a0;

@end
