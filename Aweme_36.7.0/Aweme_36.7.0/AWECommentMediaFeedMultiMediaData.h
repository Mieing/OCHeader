@class NSString, NSArray;

@interface AWECommentMediaFeedMultiMediaData : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *lynxSchema;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) NSArray *media;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
