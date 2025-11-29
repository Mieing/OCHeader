@class NSString;

@interface AWEAntiAddictActivityInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *aid;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *jumpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
