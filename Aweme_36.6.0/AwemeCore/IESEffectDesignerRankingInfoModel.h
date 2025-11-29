@class NSString, NSArray;

@interface IESEffectDesignerRankingInfoModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *designerName;
@property (readonly, copy, nonatomic) NSString *designerIdentifier;
@property (readonly, copy, nonatomic) NSString *designerEncryptedIdentifier;
@property (readonly, copy, nonatomic) NSString *smallIconURI;
@property (copy, nonatomic) NSArray *smallIconURLs;
@property (readonly, nonatomic) unsigned long long smallIconURLType;
@property (readonly, copy, nonatomic) NSString *smallIconMD5;
@property (readonly, nonatomic) long long followStatus;
@property (readonly, nonatomic) unsigned long long effectCount;
@property (readonly, nonatomic) unsigned long long followingCount;
@property (readonly, copy, nonatomic) NSArray *effects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
