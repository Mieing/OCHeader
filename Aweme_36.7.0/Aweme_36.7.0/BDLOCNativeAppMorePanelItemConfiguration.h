@class UIColor, NSString, BDLOCNativeAppMorePanelItemContext, UIImage, NSURL, NSNumber, BDLOCNativeAppMorePanel;

@interface BDLOCNativeAppMorePanelItemConfiguration : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSURL *iconURL;
@property (nonatomic) BOOL isAutoDismiss;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSNumber *alpha;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ actionBlockWithDismiss;
@property (nonatomic) long long type;
@property (retain, nonatomic) BDLOCNativeAppMorePanelItemContext *context;
@property (retain, nonatomic) BDLOCNativeAppMorePanel *morePanel;

- (void).cxx_destruct;
- (id)init;

@end
