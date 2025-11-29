@class YYLabel, NSString, UIView;

@interface AWESearchSegmentationCellController : UIViewController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UIView *leftlineView;
@property (retain, nonatomic) UIView *rightlineView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *truncationLabel;
@property (retain, nonatomic) UIView *hintView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)titleTextWithKeyword:(id)a0;
+ (id)titleTextWithContent:(id)a0;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
