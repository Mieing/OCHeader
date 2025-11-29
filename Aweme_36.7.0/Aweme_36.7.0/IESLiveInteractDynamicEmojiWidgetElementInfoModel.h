@class NSNumber, NSString, NSDictionary;

@interface IESLiveInteractDynamicEmojiWidgetElementInfoModel : IESLiveInteractDynamicBaseElementInfoModel

@property (retain, nonatomic) NSNumber *visible;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSNumber *resourceType;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSDictionary *resourceStyle;

- (void)updateValueWithParams:(id)a0;
- (void).cxx_destruct;
- (id)itemId;

@end
