@class UIColor, NSString, BDLOCNativeAppMorePanelItemContext, UIImage, NSURL, NSNumber, BDLOCNativeAppMorePanel;

@interface BDLOCNativeAppMorePanelItem : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) BOOL isAutoDismiss;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, copy, nonatomic) NSNumber *alpha;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ actionBlockWithDismiss;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BDLOCNativeAppMorePanelItemContext *context;
@property (readonly, nonatomic) BDLOCNativeAppMorePanel *morePanel;

+ (id)morePanelItemFromBDP:(id)a0;
+ (id)morePanelItemFromBDLOC:(id)a0;
+ (long long)BDLOC_morePanelItemTypeFromBDP:(long long)a0;
+ (id)morePanelItemWithConfiguration:(id)a0;
+ (long long)BDP_morePanelItemTypeFromBDLOC:(long long)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
