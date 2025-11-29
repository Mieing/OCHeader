@class LynxTemplateData, NSString, NSArray, NSDictionary;

@interface BDXPreCreateTemplateRenderConfig : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *elements;
@property (retain, nonatomic) LynxTemplateData *initialData;
@property (copy, nonatomic) NSDictionary *globalProps;

- (void).cxx_destruct;

@end
