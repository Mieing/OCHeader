@class NSString, BDPUniqueID;

@interface BDPFeedbackData_HG : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long reportType;

- (id)_getCurrentMpPath;
- (void)_getUserOpenIDWithParams:(id)a0 completion:(id /* block */)a1;
- (id)initWithUniqueID:(id)a0 reportType:(unsigned long long)a1 url:(id)a2;
- (id)getSettingsMetaInfoData;
- (void)getReportMetaInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
