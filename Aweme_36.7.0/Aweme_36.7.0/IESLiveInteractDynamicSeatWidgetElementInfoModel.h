@class NSString, NSNumber;

@interface IESLiveInteractDynamicSeatWidgetElementInfoModel : IESLiveInteractDynamicBaseElementInfoModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *dressId;
@property (copy, nonatomic) NSString *playType;
@property (retain, nonatomic) NSNumber *styleType;
@property (retain, nonatomic) NSNumber *target;
@property (copy, nonatomic) NSString *hatUrl;
@property (copy, nonatomic) NSString *animateBgColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) BOOL forcePlay;
@property (copy, nonatomic) NSString *sponsorAvatarUrl;

- (void)updateValueWithParams:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)itemId;

@end
