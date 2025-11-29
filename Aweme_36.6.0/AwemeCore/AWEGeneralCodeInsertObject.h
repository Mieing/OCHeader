@class NSString, AWEAwemeModel, UIView, AWECommerceAnchorPublishModel, UIViewController;

@interface AWEGeneralCodeInsertObject : NSObject

@property (nonatomic) unsigned long long insertPosType;
@property (nonatomic) unsigned long long anchorType;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) UIView *feedAnchorView;
@property (retain, nonatomic) AWECommerceAnchorPublishModel *publishAnchor;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (void).cxx_destruct;

@end
