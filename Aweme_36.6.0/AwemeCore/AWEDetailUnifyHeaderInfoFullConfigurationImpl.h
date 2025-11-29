@class NSString;

@interface AWEDetailUnifyHeaderInfoFullConfigurationImpl : NSObject <AWEDetailHeaderInfoConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightWithModel:(id)a0;
- (void)configureHeaderInfoView:(id)a0 withModel:(id)a1;
- (void)headerInfoView:(id)a0 updateCollectAndShareButtonwithModel:(id)a1;
- (double)headRightItemOffsetWithModel:(id)a0;
- (void)configActivityViewWithInfoView:(id)a0 model:(id)a1;
- (void)configCollectButtonWithInfoView:(id)a0 model:(id)a1;

@end
