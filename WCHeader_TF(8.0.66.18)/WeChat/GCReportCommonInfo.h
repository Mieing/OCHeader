@class NSString;

@interface GCReportCommonInfo : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSString *noticeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
