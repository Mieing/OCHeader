@class NSArray, UIImage, NSString;

@interface ACCNewVideoCoverAIRecommendImageCoverInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long frameIndex;
@property (copy, nonatomic) NSArray *cropBox;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
