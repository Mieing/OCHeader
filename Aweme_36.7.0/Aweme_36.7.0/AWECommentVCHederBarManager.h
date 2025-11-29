@class NSMutableDictionary, NSMapTable;

@interface AWECommentVCHederBarManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *componentCtrlDict;
@property (retain, nonatomic) NSMapTable *contextTable;

+ (BOOL)shouldHideForComponentCtrl:(id)a0 barType:(unsigned long long)a1 model:(id)a2;
+ (BOOL)shouldShowCommentVCHeaderBar:(id)a0;
+ (void)handleCommentVCHeaderBarAppearByContext:(id)a0 bottomContainer:(id)a1 leftContainer:(id)a2 isNew:(BOOL)a3;
+ (BOOL)shouldShowMaskVCHeaderBar:(id)a0;
+ (unsigned long long)barTypeByElementName:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
