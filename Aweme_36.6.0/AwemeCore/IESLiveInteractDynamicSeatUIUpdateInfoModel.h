@class NSString, NSArray, NSDictionary;

@interface IESLiveInteractDynamicSeatUIUpdateInfoModel : IESLiveInteractDynamicBaseElementInfoModel

@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *operationArray;
@property (copy, nonatomic) NSDictionary *operationInfo;

- (void)updateValueWithParams:(id)a0;
- (void).cxx_destruct;
- (id)itemId;

@end
