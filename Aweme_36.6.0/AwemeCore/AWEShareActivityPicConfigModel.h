@class NSString;

@interface AWEShareActivityPicConfigModel : AWEBaseApiModel

@property (nonatomic) double top;
@property (nonatomic) double left;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double font;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL hidden;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
