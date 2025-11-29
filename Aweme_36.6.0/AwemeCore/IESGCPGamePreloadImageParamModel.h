@class NSString, NSNumber;

@interface IESGCPGamePreloadImageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *gameID;
@property (retain, nonatomic) NSNumber *source;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
