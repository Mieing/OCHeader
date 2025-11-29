@class NSString, NSObject;
@protocol LSListCellVMProtocol;

@interface LSListCellView : UITableViewCell <LSListCellViewProtocol>

@property (retain, nonatomic) NSObject<LSListCellVMProtocol> *cellVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithCellVM:(id)a0 listSize:(struct CGSize { double x0; double x1; })a1;

- (void)handleCellWillDisplay:(id)a0;
- (void)updateCellSize;
- (void)handleCellDidEndDisplaying;
- (void)updateCellSizeNeedShowFull:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
