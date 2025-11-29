@class NSString, IESLLGDUserBasicInfo, NSArray;

@interface IESLLGDUserInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLGDUserBasicInfo *user_basic_info;
@property (copy, nonatomic) NSString *redirect_url;
@property (copy, nonatomic) NSString *avatar_frame_center_url;
@property (retain, nonatomic) NSArray *user_tags_v2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)user_basic_infoJSONTransformer;
+ (id)user_tags_v2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
