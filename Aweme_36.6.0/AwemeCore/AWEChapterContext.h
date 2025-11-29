@class NSNumber, NSString, NSDictionary, AWEPageContext, AWEAwemeModel, AWEChapterTracker, AWEChapterPanelUIConfig;
@protocol AWEPlayInteractionContextProtocol;

@interface AWEChapterContext : AWEPageContext

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEChapterTracker *tracker;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *playContext;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL commentPanelIsShowing;
@property (nonatomic) double panelHeightRate;
@property (retain, nonatomic) AWEChapterPanelUIConfig *uiConfig;
@property (readonly, nonatomic) NSNumber *fontClassNumber;

- (void).cxx_destruct;

@end
