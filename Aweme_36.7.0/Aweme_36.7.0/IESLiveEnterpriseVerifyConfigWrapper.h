@class NSString;
@protocol IESLiveEnterpriseVerifyConfig;

@interface IESLiveEnterpriseVerifyConfigWrapper : NSObject <IESLiveEnterpriseVerifyConfig>

@property (retain, nonatomic) id<IESLiveEnterpriseVerifyConfig> enterpriseVerifyConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enterpriseVerifyAbOpen;
- (id)initWithEnterpriseVerifyConfig:(id)a0;
- (void).cxx_destruct;

@end
