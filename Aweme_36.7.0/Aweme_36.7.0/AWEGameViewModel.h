@class UIColor, NSString, AWEGameModel;
@protocol AWEIronManService;

@interface AWEGameViewModel : NSObject

@property (retain, nonatomic) AWEGameModel *model;
@property (retain, nonatomic) UIColor *badgeColor;
@property (retain, nonatomic) id<AWEIronManService> ironManService;
@property (readonly, copy, nonatomic) NSString *coverUrl;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, nonatomic) BOOL showBadge;
@property (readonly, copy, nonatomic) NSString *badge;
@property (copy, nonatomic) NSString *sectionName;

- (id)ironManScene;
- (void)jumpToGamePage;
- (id)ironManAppID;
- (id)ironManAppName;
- (id)ironManBdpLog;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
