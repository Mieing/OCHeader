@class NSArray, NSAttributedString;

@interface AWEIMNetworkGuideTipLine : NSObject

@property (retain, nonatomic) NSArray *contents;
@property (nonatomic) long long topMargin;
@property (nonatomic) long long bottomMargin;
@property (retain, nonatomic) NSAttributedString *attrStr;

- (id)makeAttributedString;
- (double)computeLineHeight:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
