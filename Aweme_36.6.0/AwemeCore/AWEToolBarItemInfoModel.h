@class ACCToolBarItemView, ACCBarItem;

@interface AWEToolBarItemInfoModel : NSObject

@property (retain, nonatomic) ACCBarItem *itemModel;
@property (retain, nonatomic) ACCToolBarItemView *itemView;
@property (nonatomic) BOOL needShow;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) long long displayIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;

- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;

@end
