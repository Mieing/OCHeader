@class NSString, NSArray, AWEURLModel;

@interface AWEPOISimpleListInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *listID;
@property (copy, nonatomic) NSString *listTitle;
@property (copy, nonatomic) NSArray *coverURLArray;
@property (copy, nonatomic) NSString *authorNickName;
@property (retain, nonatomic) AWEURLModel *authorAvatar;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverURLArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
