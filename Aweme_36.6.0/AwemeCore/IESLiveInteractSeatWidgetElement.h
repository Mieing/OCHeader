@class NSString, NSNumber, IESLiveInteractDynamicSeatWidgetElementInfoModel;
@protocol IESLiveSubscription;

@interface IESLiveInteractSeatWidgetElement : IESLiveInteractSeatElementBase

@property (retain, nonatomic) IESLiveInteractDynamicSeatWidgetElementInfoModel *dynamicValue;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *dressId;
@property (retain, nonatomic) NSNumber *styleType;
@property (retain, nonatomic) NSNumber *target;
@property (retain, nonatomic) id<IESLiveSubscription> dispose;
@property (copy, nonatomic) NSString *hatUrl;
@property (copy, nonatomic) NSString *animateBgColor;
@property (copy, nonatomic) NSString *sponsorAvatarUrl;
@property (copy, nonatomic) NSString *backgroundColor;

- (void)dynamicUpdateItemInfo:(id)a0;
- (id)dynamicItemId;
- (void)dynamicResetItem;
- (BOOL)equalStringWithNil:(id)a0 secondNumber:(id)a1;
- (BOOL)equalNumberWithNil:(id)a0 secondNumber:(id)a1;
- (void)updateDressId:(id)a0;
- (void)updateSeatWidget:(id)a0;
- (void)resetSeatWidget;
- (id)styleTypeWithStyleType:(id)a0;
- (id)seatProvider;
- (void).cxx_destruct;
- (id)infoView;

@end
