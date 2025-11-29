@class NSString, AWEURLModel;

@interface AWEStory24CoverModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) long long createTime;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
