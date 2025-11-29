@class NSString, NSArray;

@interface IESECMallMultiTabData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *defaultTabID;
@property (retain, nonatomic) NSArray *tabList;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (nonatomic) double defaultTabHeaderHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
