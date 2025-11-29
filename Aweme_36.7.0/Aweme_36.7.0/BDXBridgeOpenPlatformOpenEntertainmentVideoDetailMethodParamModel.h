@class NSString, NSDictionary, NSArray, NSNumber;

@interface BDXBridgeOpenPlatformOpenEntertainmentVideoDetailMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *animation;
@property (copy, nonatomic) NSString *targetawemeId;
@property (copy, nonatomic) NSString *targetAlbumId;
@property (retain, nonatomic) NSNumber *targetCursor;
@property (copy, nonatomic) NSString *feedType;
@property (copy, nonatomic) NSString *detailType;
@property (copy, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSNumber *loadmore;
@property (copy, nonatomic) NSString *openSelectionPanel;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSNumber *enterScene;
@property (copy, nonatomic) NSString *requestParams;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *loadPrevious;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSArray *awemeidlist;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
