@class NSString;

@interface GXCssItem : NSObject

@property (retain, nonatomic) NSString *propertyName;
@property (retain, nonatomic) NSString *propertyValue;

- (id)initWithPropertyName:(id)a0 propertyValue:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
