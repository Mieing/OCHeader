@class NSString, AWEURLModel, AWEAwemeModel;

@interface AWEStory24BlurModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *awemeID;
@property (nonatomic) long long createTime;
@property (retain, nonatomic) AWEURLModel *blurCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blurCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
