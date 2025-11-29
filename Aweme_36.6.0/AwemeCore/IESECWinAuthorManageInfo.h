@class NSArray, NSString;

@interface IESECWinAuthorManageInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *infos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
