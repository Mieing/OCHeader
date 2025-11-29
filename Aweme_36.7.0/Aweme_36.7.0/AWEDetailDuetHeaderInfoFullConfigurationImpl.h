@class NSString;

@interface AWEDetailDuetHeaderInfoFullConfigurationImpl : NSObject <AWEDetailHeaderInfoConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightWithModel:(id)a0;
- (void)configureHeaderInfoView:(id)a0 withModel:(id)a1;
- (void)headerInfoView:(id)a0 updateCollectAndShareButtonwithModel:(id)a1;

@end
