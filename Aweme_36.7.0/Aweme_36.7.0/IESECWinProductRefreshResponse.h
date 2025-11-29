@class NSDictionary, NSString;

@interface IESECWinProductRefreshResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *refreshInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)refreshInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
