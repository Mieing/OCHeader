@class NSString, AWEAwemeModel;

@interface AWEAdSearchKVAbstractView : UIView <AWEAdSearchKVAbstractView>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ trackSearchResultClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithAweme:(id)a0;
- (void)kvAbstractViewTapped:(id)a0;
- (id)createLabelWith:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
