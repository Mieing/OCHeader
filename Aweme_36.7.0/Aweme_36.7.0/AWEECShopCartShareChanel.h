@class NSString;

@interface AWEECShopCartShareChanel : AWEShareBaseChannel <AWEShareItemDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (long long)shareCategory;
- (id)getChannelModel;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;

@end
