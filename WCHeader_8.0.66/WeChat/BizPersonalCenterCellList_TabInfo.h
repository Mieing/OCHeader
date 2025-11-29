@class NSString, NSMutableArray;

@interface BizPersonalCenterCellList_TabInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tabName;
@property (retain, nonatomic) NSMutableArray *notifyScene;
@property (nonatomic) BOOL isDefaultTab;

+ (void)initialize;

- (void)setIsDefaultTab:(BOOL)a0;
- (BOOL)isDefaultTab;
- (void)setNotifyScene:(id)a0;
- (id)notifyScene;
- (void)setTabName:(id)a0;
- (id)tabName;

@end
