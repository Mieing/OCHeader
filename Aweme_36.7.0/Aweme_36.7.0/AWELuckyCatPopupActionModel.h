@class NSString, NSDictionary;

@interface AWELuckyCatPopupActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSString *onSuccessActionID;
@property (copy, nonatomic) NSString *onFailActionID;
@property (copy, nonatomic) NSDictionary *paramsDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
