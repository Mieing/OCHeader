@class NSString, NSDictionary;

@interface WBSuperGroupObject : NSObject

@property (retain, nonatomic) NSString *superGroup;
@property (retain, nonatomic) NSString *section;
@property (retain, nonatomic) NSDictionary *extData;

+ (id)dictionaryWithSuperTopicObject:(id)a0;
+ (id)superGroupObjectWithDictionary:(id)a0;
+ (id)object;

- (void).cxx_destruct;
- (id)validate;

@end
