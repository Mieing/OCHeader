@class NSString, NSArray, IESLLifeURLModel;

@interface IESLLPOISimpleListInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *listID;
@property (copy, nonatomic) NSString *listTitle;
@property (copy, nonatomic) NSArray *coverURLArray;
@property (copy, nonatomic) NSString *authorNickName;
@property (retain, nonatomic) IESLLifeURLModel *authorAvatar;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverURLArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
