@class NSNumber, NSString;

@interface IESLiveInteractDynamicEmptyElementInfoModel : IESLiveInteractDynamicBaseElementInfoModel

@property (retain, nonatomic) NSNumber *visible;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descColor;
@property (copy, nonatomic) NSString *emptyBgColor;

- (void)updateValueWithParams:(id)a0;
- (void).cxx_destruct;
- (id)itemId;

@end
