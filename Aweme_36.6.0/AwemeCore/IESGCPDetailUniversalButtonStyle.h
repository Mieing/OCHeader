@class UIColor, NSString;

@interface IESGCPDetailUniversalButtonStyle : NSObject

@property (nonatomic) BOOL userInteractionEnabled;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

- (void).cxx_destruct;
- (id)init;

@end
