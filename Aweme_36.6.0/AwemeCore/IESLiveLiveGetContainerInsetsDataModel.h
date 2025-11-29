@class NSNumber;

@interface IESLiveLiveGetContainerInsetsDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *top;
@property (retain, nonatomic) NSNumber *right;
@property (retain, nonatomic) NSNumber *bottom;
@property (retain, nonatomic) NSNumber *left;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
