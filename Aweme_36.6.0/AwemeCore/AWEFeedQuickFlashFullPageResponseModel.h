@class NSNumber, NSString, NSArray;

@interface AWEFeedQuickFlashFullPageResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSString *preferredSchema;
@property (retain, nonatomic) NSArray *fullPageVideoList;
@property (retain, nonatomic) NSArray *fullPageWrapperList;
@property (retain, nonatomic) NSArray *tagList;
@property (retain, nonatomic) NSArray *fullPagePlayList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fullPageVideoListJSONTransformer;
+ (id)fullPageWrapperListJSONTransformer;
+ (id)fullPagePlayListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
