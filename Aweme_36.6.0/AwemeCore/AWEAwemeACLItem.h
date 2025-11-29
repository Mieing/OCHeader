@class NSString;

@interface AWEAwemeACLItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long showType;
@property (copy, nonatomic) NSString *toastMessage;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *panel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)jsonStringValue;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
