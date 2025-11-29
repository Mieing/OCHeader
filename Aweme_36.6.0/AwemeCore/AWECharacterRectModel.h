@class NSAttributedString;

@interface AWECharacterRectModel : NSObject

@property (nonatomic) struct CGSize { double width; double height; } labelSize;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSAttributedString *attributedText;

+ (id)instanceWithBlock:(id /* block */)a0;
+ (id)instanceWithBuilder:(id)a0;

- (void).cxx_destruct;

@end
