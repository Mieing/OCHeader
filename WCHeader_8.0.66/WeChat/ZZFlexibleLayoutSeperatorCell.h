@class NSString, ZZFlexibleLayoutSeperatorModel;

@interface ZZFlexibleLayoutSeperatorCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) ZZFlexibleLayoutSeperatorModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })viewSizeByDataModel:(id)a0;

- (id)init;
- (void)setViewDataModel:(id)a0;
- (void).cxx_destruct;

@end
