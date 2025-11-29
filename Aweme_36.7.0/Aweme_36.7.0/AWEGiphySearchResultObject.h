@class NSString, NSDictionary, NSURL, NSNumber, AWEURLModel;

@interface AWEGiphySearchResultObject : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *originURL;
@property (retain, nonatomic) AWEURLModel *thumbnailURL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *animateType;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSNumber *imageID;
@property (retain, nonatomic) NSNumber *packageID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *authorDict;
@property (copy, nonatomic) NSString *heyCanEmojiID;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSURL *requestedURL;
@property (copy, nonatomic) NSString *searchLogID;
@property (copy, nonatomic) NSString *sourceDescription;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activitySchema;
@property (copy, nonatomic) NSString *sentenceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originURLJSONTransformer;
+ (id)thumbnailURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)authorSecUidString;
- (void).cxx_destruct;

@end
