@class NSArray, NSString, IESLiveImageView, UIImageView, NSObject;
@protocol OS_dispatch_group;

@interface IESLiveVSSharePosterView : UIView <IESLiveVSSharePosterViewProtocol>

@property (copy, nonatomic) NSArray *posterURLs;
@property (copy, nonatomic) NSString *posterURL;
@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *downLoadGroup;
@property (retain, nonatomic) IESLiveImageView *posterImageView;
@property (retain, nonatomic) UIImageView *qrImageView;
@property (copy, nonatomic) id /* block */ downLoadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addQRCodeImage:(id)a0;
- (void)startLoadSubviews;
- (id)compressImage:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1;
- (void)startLoadPosterImage;
- (id)initWithPosterURL:(id)a0 isPreview:(BOOL)a1;
- (id)initWithPosterURLs:(id)a0 isPreview:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setupSubviews;

@end
