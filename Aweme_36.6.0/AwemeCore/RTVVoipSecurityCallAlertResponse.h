@class NSString, NSArray;

@interface RTVVoipSecurityCallAlertResponse : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *headerImageURLString;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *contentHighlights;
@property (copy, nonatomic) NSString *confirmButtonTitle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
