@class UIColor, NSString, MMDropManager;

@interface MMMultiMenuTableViewCell : MMBaseMultiMenuTableViewCell <MMDropDelegate> {
    MMDropManager *m_dropManager;
}

@property (retain, nonatomic) UIColor *bkgColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setBackgroundColor:(id)a0;
- (void)dropSessionDidEnter;
- (void)dropSessionDidExit;
- (void).cxx_destruct;

@end
