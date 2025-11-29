@class NSString, MMUIActivityIndicatorView, UIImageView, NSMutableData, NSURLConnection;
@protocol AsyncImageViewDelegate;

@interface AsyncImageView : MMUIView <IHttpCacheExt> {
    NSURLConnection *connection;
    NSMutableData *m_data;
    MMUIActivityIndicatorView *m_activityIndicator;
    UIImageView *m_imageView;
    NSString *m_url;
    BOOL m_showLoadingView;
}

@property (nonatomic) long long m_contentMode;
@property (weak, nonatomic) id<AsyncImageViewDelegate> delegate;
@property (retain, nonatomic) NSString *m_nsNotifyKey;
@property (readonly, nonatomic) NSString *m_url;

- (id)description;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)loadImageFromHttpCacheMgr:(id)a0 Type:(unsigned int)a1 showLoadingView:(BOOL)a2;
- (void)loadImageFromHttpCacheMgr:(id)a0 Type:(unsigned int)a1;
- (void)setImage:(id)a0;
- (id)image;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
