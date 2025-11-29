@class IESLiveInteractDynamicEmojiWidgetElementInfoModel, NSString, UIImageView, UILabel, NSNumber, IESLiveAnimatedImageView;

@interface IESLiveInteractEmojiWidgetElement : IESLiveInteractSeatElementBase

@property (retain, nonatomic) IESLiveInteractDynamicEmojiWidgetElementInfoModel *dynamicValue;
@property (retain, nonatomic) NSNumber *visible;
@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSNumber *resourceType;
@property (copy, nonatomic) NSString *value;
@property (retain, nonatomic) UIImageView *emojiImageView;
@property (retain, nonatomic) UILabel *emojiLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *avatarAnim;
@property (nonatomic) BOOL isAnimated;

- (void)dynamicUpdateItemInfo:(id)a0;
- (id)dynamicItemId;
- (id)emojiWidgetContainer;
- (void)updateEmojiWidget:(id)a0;
- (id)interactInfoView;
- (void)elementSeatTypeDidChanged;
- (void).cxx_destruct;
- (id)infoView;

@end
