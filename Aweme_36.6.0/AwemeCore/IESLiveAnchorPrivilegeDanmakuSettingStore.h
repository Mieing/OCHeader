@class NSArray, HTSLiveScreenChatSetting, HTSEventContext, NSString, IESLivePrivilegeScreenChatApi;

@interface IESLiveAnchorPrivilegeDanmakuSettingStore : NSObject

@property (retain, nonatomic) HTSLiveScreenChatSetting *privilegeDanmakuSetting;
@property (retain, nonatomic) IESLivePrivilegeScreenChatApi *api;
@property (copy, nonatomic) NSArray *headerTitles;
@property (copy, nonatomic) NSArray *settingItems;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *enterFrom;

- (void)setupItems;
- (void)buildSettingAndAPI;
- (id)followRequirements;
- (id)selectionItemWithTitle:(id)a0 selected:(BOOL)a1;
- (id)activeRequirements;
- (id)fansclubRequirements;
- (id)lastSelectionItemInSection:(long long)a0;
- (long long)valueFromMetaValue:(id)a0;
- (void)updateSettingValue:(long long)a0 inSection:(long long)a1;
- (id)initWithPrivilegeDanmakuSetting:(id)a0 privilegeDanmakuSettingApi:(id)a1;
- (void)updateSelectionAtIndexPath:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
