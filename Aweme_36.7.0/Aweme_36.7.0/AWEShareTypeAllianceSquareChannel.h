@class NSString;

@interface AWEShareTypeAllianceSquareChannel : AWEShareBaseChannel <AWEShareItemDelegate> {
    long long _shareCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)didSelectShareItem:(id)a0;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (long long)shareCategory;
- (id)trackingLabel;
- (id)allianceChannelTrackParams;
- (BOOL)share;
- (BOOL)isDarkTheme;
- (void)dealloc;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
