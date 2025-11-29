@class AWEFeedQuickFlashDetailPageItemModel, NSString, AWEAwemeModel;

@interface AWEFeedQuickFlashDetailPageWrapperModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedQuickFlashDetailPageItemModel *itemModel;
@property (nonatomic) long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)isEqualBlock;
+ (id)awemeModelJSONTransformer;
+ (id)itemModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
