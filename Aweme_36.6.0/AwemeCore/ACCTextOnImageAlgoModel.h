@class NSString;

@interface ACCTextOnImageAlgoModel : NSObject

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) double fontSize;
@property (nonatomic) long long style;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double wordSpacing;
@property (nonatomic) struct CGSize { double width; double height; } backgroundExpandSize;

+ (id)modelWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
