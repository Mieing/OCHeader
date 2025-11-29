@class NSString;

@interface IESLiveLongPressStatusModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status_code;
@property (copy, nonatomic) NSString *status_msg;
@property (nonatomic) long long recommend_status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
