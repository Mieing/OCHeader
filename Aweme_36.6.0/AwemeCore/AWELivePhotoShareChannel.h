@class AWEMediaDownloadOptions, NSString;

@interface AWELivePhotoShareChannel : AWEShareBaseChannel <AWEShareItemDelegate>

@property (retain, nonatomic) AWEMediaDownloadOptions *downloadOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (BOOL)isShareItemEnabled;
- (id)prepareDownloadOptions;
- (void).cxx_destruct;
- (id)shareType;
- (id)shareTitle;

@end
