@class NSString;

@interface IESIMEmoticonResourceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long resourceId;
@property (nonatomic) long long createTime;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *resourceUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
