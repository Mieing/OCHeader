@class GiftCustomConfig, AnchorSwitchSkinInfo_SelectedValue, NSMutableArray, AnchorSwitchSkinInfo_SpamResult;

@interface AnchorSwitchSkinInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *switchSkinInfoList;
@property (retain, nonatomic) GiftCustomConfig *customConfig;
@property (retain, nonatomic) AnchorSwitchSkinInfo_SelectedValue *currentValue;
@property (retain, nonatomic) AnchorSwitchSkinInfo_SelectedValue *commitValue;
@property (retain, nonatomic) AnchorSwitchSkinInfo_SpamResult *spamResult;

+ (void)initialize;

@end
