@class NSArray, NSString;

@interface LSIMMessageRichTextModel : NSObject

@property (copy, nonatomic) NSArray *contents;
@property (copy, nonatomic) NSString *originText;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
