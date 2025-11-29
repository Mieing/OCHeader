@class NSString, UIImage, NSAttributedString;

@interface AWEEntertainmentMultipleEventsConfig : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *richText;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) long long index;

- (id)initWithEventText:(id)a0 action:(id /* block */)a1 index:(long long)a2;
- (void).cxx_destruct;

@end
