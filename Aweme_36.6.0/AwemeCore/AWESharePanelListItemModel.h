@class UIColor, NSArray, NSString, UICollectionViewFlowLayout, UIView;
@protocol AWEShareTask, AWEIMShareContactListProtocol;

@interface AWESharePanelListItemModel : NSObject <AWESharePanelListItem>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *cellItems;
@property (retain, nonatomic) id<AWEShareTask> task;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double sectionHeight;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UIColor *itemBackgroundColor;
@property (retain, nonatomic) id<AWEIMShareContactListProtocol> imShareContactList;
@property (copy, nonatomic) NSArray *friends;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) id /* block */ AWEIMMoreBtnClick;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (copy, nonatomic) id /* block */ viewDidScroll;
@property (nonatomic) double sectionHeaderHeight;
@property (retain, nonatomic) UIView *sectionHeader;
@property (nonatomic) double sectionFooterHeight;
@property (retain, nonatomic) UIView *sectionFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
