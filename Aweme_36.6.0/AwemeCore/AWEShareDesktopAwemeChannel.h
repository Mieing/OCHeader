@class NSString;

@interface AWEShareDesktopAwemeChannel : AWEShareBaseChannel <AWEUGDesktopChannelGuideMessage, AWEShareItemDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)desktopChannelGuideShowFailedWithScene:(id)a0 enterFrom:(id)a1 guideType:(id)a2 error:(id)a3 extraParams:(id)a4;
- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (long long)shareCategory;
- (id)desktopChannelRequestModel;
- (id)init;
- (void)dealloc;
- (id)shareType;
- (id)shareTitle;

@end
