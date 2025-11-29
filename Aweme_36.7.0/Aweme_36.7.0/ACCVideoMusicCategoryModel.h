@class NSString, AWEURLModel;

@interface ACCVideoMusicCategoryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWEURLModel *cover;
@property (retain, nonatomic) AWEURLModel *awemeCover;
@property (nonatomic) BOOL isHot;
@property (nonatomic) long long level;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)awemeCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
