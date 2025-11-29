@class NSString, ValueAttr;

@interface ShowInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) ValueAttr *valueAttr;
@property (retain, nonatomic) NSString *nameColor;
@property (retain, nonatomic) NSString *valueColor;

+ (void)initialize;

@end
