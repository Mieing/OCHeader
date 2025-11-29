@class NSArray;

@interface AWESearchCardParagraphLabel : YYLabel {
    NSArray *_p_accessibilityElements;
}

@property (copy, nonatomic) id /* block */ tapParagraphBlock;
@property (copy, nonatomic) id /* block */ tapNickNameBlock;
@property (copy, nonatomic) id /* block */ tapHashtagBlock;
@property (copy, nonatomic) id /* block */ tapSearchWordBlock;
@property (copy, nonatomic) id /* block */ tapParagraphSuffix;
@property (copy, nonatomic) id /* block */ tapParagraphPrefix;

+ (BOOL)fixParagraphLabelRetaincircle;

- (void)configWithParagraphModel:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;

@end
