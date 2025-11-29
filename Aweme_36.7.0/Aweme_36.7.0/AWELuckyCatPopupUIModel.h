@class AWELuckyCatPopupHeadImageModel, NSArray, NSString, AWELuckyCatPopupCloseButtonModel, AWELuckyCatPopupContainerModel;

@interface AWELuckyCatPopupUIModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatPopupContainerModel *container;
@property (retain, nonatomic) AWELuckyCatPopupHeadImageModel *headImage;
@property (retain, nonatomic) AWELuckyCatPopupCloseButtonModel *closeButton;
@property (retain, nonatomic) NSArray *widgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerJSONTransformer;
+ (id)headImageJSONTransformer;
+ (id)closeButtonJSONTransformer;
+ (id)widgetsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
