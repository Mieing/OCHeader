@class NSArray, NSString, NSNumber;

@interface IESLivePKTitleBarConfigModel : NSObject

@property (copy, nonatomic) NSArray *iconImageURLList;
@property (copy, nonatomic) NSArray *preIconImageURLList;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) NSNumber *iconHeight;
@property (retain, nonatomic) NSNumber *iconWidth;
@property (retain, nonatomic) NSNumber *preIconHeight;
@property (retain, nonatomic) NSNumber *preIconWidth;
@property (copy, nonatomic) NSArray *backgroundImageURLList;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
