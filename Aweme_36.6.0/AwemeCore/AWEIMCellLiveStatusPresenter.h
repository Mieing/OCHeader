@class NSString;
@protocol AWELiveEntryProtocol;

@interface AWEIMCellLiveStatusPresenter : AWEIMCellPresenterBase <AWEIMChatCellComponentAccessibility>

@property (readonly, nonatomic) BOOL enableClick;
@property (readonly, nonatomic) BOOL isNormalChat;
@property (retain, nonatomic) id<AWELiveEntryProtocol> liveEntryProtocol;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnableClick:(BOOL)a0 isNormalChat:(BOOL)a1;
- (void)setDisplayEnable:(BOOL)a0;
- (long long)componentViewPosition;
- (id)createViewInCell:(id)a0;
- (void)updateView:(id)a0;
- (long long)cellAccessibilityOrder;
- (void)updateLiveColorRingHidden:(BOOL)a0;
- (id)initWithEnableClick:(BOOL)a0 isNormalChat:(BOOL)a1 withLiveEntryProtocol:(id)a2;
- (void).cxx_destruct;

@end
