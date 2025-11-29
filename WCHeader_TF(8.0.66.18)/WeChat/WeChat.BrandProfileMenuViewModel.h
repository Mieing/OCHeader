@interface WeChat.BrandProfileMenuViewModel : NSObject {
    void /* unknown type, empty encoding */ _menuItems;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ menuWidth;

- (id)generateView;
- (id)filterButtonList:(id)a0 isForceButtonHidden:(BOOL)a1;
- (void)updateWithButtonList:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
