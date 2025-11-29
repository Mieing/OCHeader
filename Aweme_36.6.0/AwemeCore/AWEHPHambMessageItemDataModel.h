@class NSString, NSObject;

@interface AWEHPHambMessageItemDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cmd;
@property (copy, nonatomic) NSObject *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
