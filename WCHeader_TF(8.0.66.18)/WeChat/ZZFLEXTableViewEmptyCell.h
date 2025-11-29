@class NSString;

@interface ZZFLEXTableViewEmptyCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightByDataModel:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setViewDataModel:(id)a0;

@end
