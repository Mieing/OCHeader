@class NSString, NSArray;

@interface ACCEditTextModeTemplateConfigModel : NSObject

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSArray *dimensionsArray;
@property (copy, nonatomic) NSArray *historyArray;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSArray *forceStyleArray;

- (id)configIdentifier;
- (void).cxx_destruct;
- (id)toDictionary;

@end
