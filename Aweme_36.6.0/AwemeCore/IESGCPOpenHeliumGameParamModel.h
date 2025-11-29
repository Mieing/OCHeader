@class NSString, NSNumber;

@interface IESGCPOpenHeliumGameParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *gameId;
@property (retain, nonatomic) NSNumber *enterFrom;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSNumber *isAnchor;
@property (copy, nonatomic) NSString *promoterId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
