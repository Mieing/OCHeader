@class NSString, UIView;

@interface AWEDetailHeaderInfoFullConfigurationImpl : NSObject <AWEDetailHeaderInfoConfiguration>

@property (retain, nonatomic) UIView *relativeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightWithModel:(id)a0;
- (void)configureHeaderInfoView:(id)a0 withModel:(id)a1;
- (void)headerInfoView:(id)a0 updateCollectAndShareButtonwithModel:(id)a1;
- (void)configureUIForView:(id)a0 withModel:(id)a1;
- (void)configureLayoutForView:(id)a0 withModel:(id)a1;
- (void)configureAIStickerUIForView:(id)a0 withModel:(id)a1;
- (void)configureUIForView:(id)a0;
- (double)titleLabelHeight:(id)a0;
- (void).cxx_destruct;

@end
