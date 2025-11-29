@class AWECommentImageModel, AWECommentMultiMediaVideoModel, NSString;

@interface AWECommentMultiMediaModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) AWECommentImageModel *imageModel;
@property (retain, nonatomic) AWECommentMultiMediaVideoModel *videoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoModelJSONTransformer;
+ (id)imageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
