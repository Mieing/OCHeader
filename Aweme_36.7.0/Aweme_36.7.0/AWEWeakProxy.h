@class AWEIndexView;
@protocol AWETableViewSectionIndexDelegate;

@interface AWEWeakProxy : NSObject

@property (weak, nonatomic) AWEIndexView *indexView;
@property (weak, nonatomic) id<AWETableViewSectionIndexDelegate> awe_indexViewDelegate;

- (void).cxx_destruct;

@end
