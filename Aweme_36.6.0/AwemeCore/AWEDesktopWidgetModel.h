@class NSString;

@interface AWEDesktopWidgetModel : NSObject

@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *family;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *size;
@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *installNameWithSuffix;
@property (copy, nonatomic) NSString *installNameWithSize;
@property (copy, nonatomic) NSString *installNameOld;

- (void).cxx_destruct;

@end
