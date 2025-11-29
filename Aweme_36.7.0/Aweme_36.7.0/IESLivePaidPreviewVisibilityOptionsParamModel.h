@class NSNumber, NSArray;

@interface IESLivePaidPreviewVisibilityOptionsParamModel : IESLiveBridgeModel

@property (nonatomic) BOOL isShowNotPreviewOption;
@property (retain, nonatomic) NSNumber *visibleType;
@property (copy, nonatomic) NSArray *userList;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
