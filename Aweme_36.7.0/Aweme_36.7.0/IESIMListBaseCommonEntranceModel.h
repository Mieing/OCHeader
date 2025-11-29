@class NSString, NSDictionary;

@interface IESIMListBaseCommonEntranceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *introduceTitle;
@property (copy, nonatomic) NSString *introduceDescription;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
