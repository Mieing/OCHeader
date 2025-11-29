@class NSString, AWEURLModel;

@interface AWELVideoPreviewConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *upCover;
@property (retain, nonatomic) AWEURLModel *downCover;
@property (retain, nonatomic) AWEURLModel *backgroundCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)upCoverJSONTransformer;
+ (id)downCoverJSONTransformer;
+ (id)backgroundCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
