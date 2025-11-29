@class NSString, NSDictionary;

@interface AWEVideoShareInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *videoItemId;
@property (retain, nonatomic) NSString *authorId;
@property (retain, nonatomic) NSString *authorSecId;
@property (retain, nonatomic) NSString *authorName;
@property (retain, nonatomic) NSString *commentUserId;
@property (retain, nonatomic) NSString *commentUserSecId;
@property (retain, nonatomic) NSString *commentContent;
@property (retain, nonatomic) NSString *commentUserNickname;
@property (retain, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *imageIndex;
@property (copy, nonatomic) NSString *shareFromKey;
@property (copy, nonatomic) NSString *shareFromType;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *bgColorInfo;
@property (copy, nonatomic) NSDictionary *optionalExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)indexFromType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
