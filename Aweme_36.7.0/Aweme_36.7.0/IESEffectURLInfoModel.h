@class NSString, NSArray;

@interface IESEffectURLInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *downloadURI;
@property (copy, nonatomic) NSArray *downloadURLs;
@property (readonly, nonatomic) unsigned long long urlType;
@property (readonly, copy, nonatomic) NSString *md5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setURLPrefix:(id)a0;

@end
