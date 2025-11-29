@class NSString, NSDictionary;

@interface AWEGeneralPostSchemaModel : NSObject

@property (copy, nonatomic) NSString *themeID;
@property (copy, nonatomic) NSString *level;
@property (copy, nonatomic) NSString *themeTitle;
@property (copy, nonatomic) NSString *storyCategory;
@property (copy, nonatomic) NSString *coverURL;
@property (copy, nonatomic) NSString *composerDataString;
@property (copy, nonatomic) NSDictionary *schemaParam;
@property (copy, nonatomic) NSString *originSchema;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0;

@end
