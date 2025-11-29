@class NSString;

@interface CgiRouterInfo : NSObject <YYModel>

@property (nonatomic) unsigned int businessId;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSString *cgiPath;
@property (nonatomic) unsigned int tryCount;
@property (retain, nonatomic) NSString *cgiName;
@property (retain, nonatomic) NSString *cgiUri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
