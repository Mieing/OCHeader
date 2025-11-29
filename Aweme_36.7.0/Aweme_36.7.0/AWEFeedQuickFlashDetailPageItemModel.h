@class NSString, AWEFeedQuickFlashDetailPageItemIconModel, AWEFeedQuickFlashStickerTagStyleModel;

@interface AWEFeedQuickFlashDetailPageItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *showId;
@property (copy, nonatomic) NSString *imgURL;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL tracked;
@property (retain, nonatomic) AWEFeedQuickFlashStickerTagStyleModel *flashTagModel;
@property (retain, nonatomic) AWEFeedQuickFlashDetailPageItemIconModel *iconModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)flashTagModelJSONTransformer;
+ (id)iconModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
