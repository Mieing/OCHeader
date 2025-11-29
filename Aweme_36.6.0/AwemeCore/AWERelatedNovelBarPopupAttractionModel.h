@class NSString;

@interface AWERelatedNovelBarPopupAttractionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *rightContent;
@property (nonatomic) BOOL isNovelUser;
@property (nonatomic) BOOL canPopup;
@property (copy, nonatomic) NSString *appSchema;
@property (copy, nonatomic) NSString *zlink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)isNovelUserJSONTransformer;
+ (id)canPopupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
