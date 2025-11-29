@class NSString, MMUIActivityIndicatorView;

@interface KindaLoadingImage : KindaView <MMKLoadingImage>

@property (retain, nonatomic) MMUIActivityIndicatorView *m_loadingImage;
@property (nonatomic) long long m_loadingImageStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setStyle:(long long)a0;
- (long long)getStyle;
- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;

@end
