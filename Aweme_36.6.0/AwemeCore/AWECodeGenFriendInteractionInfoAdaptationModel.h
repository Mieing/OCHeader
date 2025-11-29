@class NSArray;

@interface AWECodeGenFriendInteractionInfoAdaptationModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *diggListModelArray;
@property (copy, nonatomic) NSArray *commentListModelArray;
@property (nonatomic) BOOL commentHasMore;
@property (nonatomic) BOOL commentCursor;
@property (nonatomic) long long interactionPanelType;
@property (copy, nonatomic) NSArray *diggPreloadUidArray;
@property (nonatomic) long long viewPanelType;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
