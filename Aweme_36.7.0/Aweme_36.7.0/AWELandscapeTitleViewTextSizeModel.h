@interface AWELandscapeTitleViewTextSizeModel : NSObject {
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ suffixText;
    void /* unknown type, empty encoding */ textFont;
    void /* unknown type, empty encoding */ suffixTextFont;
    void /* unknown type, empty encoding */ $__lazy_storage_$_whiteSpaceWidth;
}

@property (nonatomic) double whiteSpaceWidth;
@property (nonatomic) double textWidth;
@property (nonatomic) double suffixTextWidth;
@property (nonatomic) double textRealWidth;
@property (nonatomic) double viewWidth;

- (void)updateWith:(id)a0 suffixText:(id)a1;
- (double)realTextWidthWith:(double)a0;
- (id)initWithText:(id)a0 suffixText:(id)a1 textFont:(id)a2 suffixTextFont:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
