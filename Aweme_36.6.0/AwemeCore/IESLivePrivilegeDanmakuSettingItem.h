@class NSString, HTSLiveTabItem;

@interface IESLivePrivilegeDanmakuSettingItem : NSObject <IESLivePrivilegeDanmakuSettingItemProtocol>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) HTSLiveTabItem *selectedTabItem;
@property (nonatomic) double settingViewHeight;
@property (copy, nonatomic) id /* block */ cancelSelectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;

@end
