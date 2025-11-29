@class NSString, NSArray;

@interface IESHeycanStickerPanelCategoryModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long categoryId;
@property (readonly, copy, nonatomic) NSString *categoryName;
@property (readonly, copy, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSString *uri;
@property (readonly, nonatomic) BOOL isUseRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
