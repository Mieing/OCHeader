@class NSString, NSMutableString;

@interface AWELynxPageModel : NSObject

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSMutableString *schema;

- (void).cxx_destruct;

@end
