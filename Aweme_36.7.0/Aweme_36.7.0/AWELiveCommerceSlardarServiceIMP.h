@class NSString;

@interface AWELiveCommerceSlardarServiceIMP : NSObject <IESLiveCommerceSlardarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportInfoIsAdShowing:(BOOL)a0;
- (void)reportInfoWithAdCid:(id)a0 AndLogExtra:(id)a1;

@end
