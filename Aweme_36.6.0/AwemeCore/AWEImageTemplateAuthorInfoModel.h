@class NSString, NSDictionary;

@interface AWEImageTemplateAuthorInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *xingtuUserID;
@property (copy, nonatomic) NSString *xingtuUserName;
@property (copy, nonatomic) NSString *DouyinUserID;
@property (copy, nonatomic) NSString *DouyinUserName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
