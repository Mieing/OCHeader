@class NSString, AWEShareAsStoryStyleFrameModel;

@interface AWEShareAsStoryStyleTextModel : NSObject

@property (copy, nonatomic) NSString *typeString;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AWEShareAsStoryStyleFrameModel *frameModel;

+ (id)modelCustomPropertyMapper;
+ (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 content:(id)a1;

- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 content:(id)a1;
- (void).cxx_destruct;

@end
