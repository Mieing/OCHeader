@class IESECContentListLynxComponent;

@interface IESECContentListLynxCell : UITableViewCell

@property (retain, nonatomic) IESECContentListLynxComponent *lynxComponent;

- (void)configureWithUrl:(id)a0 bizParams:(id)a1 rawData:(id)a2 extraParams:(id)a3;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
