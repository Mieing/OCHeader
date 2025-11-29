@class NSString, NSDictionary;

@interface CSPCommonRequestInfoModel : NSObject <CSPCommonRequestInfo>

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *method;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
