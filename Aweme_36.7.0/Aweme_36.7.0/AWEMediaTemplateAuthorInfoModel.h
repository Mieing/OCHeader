@class NSString, AWEURLModel;

@interface AWEMediaTemplateAuthorInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *xingtuUserID;
@property (copy, nonatomic) NSString *xingtuUserName;
@property (copy, nonatomic) NSString *DouyinUserID;
@property (copy, nonatomic) NSString *DouyinUserName;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) AWEURLModel *avatarThumb;
@property (copy, nonatomic) NSString *secUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
