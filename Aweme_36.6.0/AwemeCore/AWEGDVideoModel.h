@class NSString, NSArray;

@interface AWEGDVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cover_url;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) long long anchorSayIndex;
@property (retain, nonatomic) NSArray *videoIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoIdListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
