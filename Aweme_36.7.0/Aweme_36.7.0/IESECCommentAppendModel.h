@class NSString, NSArray;

@interface IESECCommentAppendModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *commentTime;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *highlights;
@property (copy, nonatomic) NSArray *appendPhotos;
@property (retain, nonatomic) NSArray *appendVideos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightsJSONTransformer;
+ (id)appendPhotosJSONTransformer;
+ (id)appendVideosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
