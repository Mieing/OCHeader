@class AWENewHotSpotFeedCardModel;

@interface AWENewHotSpotCommentActionPanelFrame : NSObject

@property (weak, nonatomic) AWENewHotSpotFeedCardModel *cardModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } actionPanelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } likeBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } commentBtnFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } shareBtnFrame;
@property (nonatomic) BOOL shouldHideShareBtn;

+ (Class)aAWEDiscoverDModuleServiceDOUYINLiteAdaperClass;

- (id)aAWEDiscoverDModuleServiceDOUYINLiteAdaper;
- (void)configWithCardModel:(id)a0 containerWidth:(double)a1;
- (BOOL)isCommentShareNotAllowed;
- (void).cxx_destruct;
- (id)init;

@end
