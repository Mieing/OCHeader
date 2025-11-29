@class NSArray, NSDictionary, NSString;

@interface AWEIMEmojiResourcesListHotKeyword : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *hotWords;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
