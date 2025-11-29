@class NSString, NSAttributedString;

@interface AWEDanmakuRecommendShieldTableViewCellModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSString *cancelText;
@property (retain, nonatomic) NSAttributedString *danmakuContentAttributeString;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (nonatomic) double height;
@property (nonatomic) BOOL isSingleDanmaku;

+ (id)defaultModel;

- (struct CGSize { double x0; double x1; })calculateSizeWithAttributedString:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)calculateHeightWithAvailableWidth:(double)a0;
- (void).cxx_destruct;

@end
