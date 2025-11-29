@class NSNumber, NSArray;

@interface IESLivePaidPreviewVisibilityOptionsDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *visibleType;
@property (copy, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSNumber *duration;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
