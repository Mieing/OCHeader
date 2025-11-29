@class NSArray, UIViewController, MJPageViewTitleItem;

@interface MJPageItem : NSObject

@property (retain, nonatomic) MJPageViewTitleItem *titleView;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) unsigned long long tab;
@property (nonatomic) unsigned long long editContentType;
@property (retain, nonatomic) NSArray *supportedSegmentTypes;

- (id)initWithTitleView:(id)a0 contentViewController:(id)a1 tab:(unsigned long long)a2;
- (id)initWithTitleView:(id)a0 contentViewController:(id)a1 tab:(unsigned long long)a2 editContentType:(unsigned long long)a3 supportedSegmentTypes:(id)a4;
- (void).cxx_destruct;

@end
