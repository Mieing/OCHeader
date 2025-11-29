@class NSDictionary, NSString;

@interface IESLiveAnnouncementPanelConfig : NSObject

@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL enableFansGroupShare;
@property (nonatomic) long long announcementID;
@property (nonatomic) long long enterFromType;
@property (copy, nonatomic) NSString *pageType;
@property (nonatomic) BOOL forceOpenListPanel;
@property (nonatomic) long long displayMode;
@property (nonatomic) long long selectedAnnouncementID;
@property (copy, nonatomic) id /* block */ announcementCannotSelect;
@property (nonatomic) BOOL banEditWhenSelectMode;
@property (copy, nonatomic) id /* block */ hasLiveSticker;
@property (copy, nonatomic) id /* block */ liveStickerAnnouncementID;
@property (copy, nonatomic) NSDictionary *configParams;
@property (nonatomic) BOOL hideLuckyMoneyItem;
@property (nonatomic) BOOL returnAfterCreateSucceed;
@property (nonatomic) BOOL hideCreateButton;
@property (nonatomic) BOOL hideSettingAndInfoArea;
@property (nonatomic) BOOL hideShareArea;
@property (nonatomic) BOOL hideMoreFunctionArea;

+ (id)panelConfig:(id)a0 entranceType:(long long)a1;

- (void).cxx_destruct;
- (id)init;

@end
