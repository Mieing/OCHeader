@class NSString;

@interface AWEDTOTextExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
