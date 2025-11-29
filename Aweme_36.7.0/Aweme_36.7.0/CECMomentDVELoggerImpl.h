@class NSDictionary, NSString;

@interface CECMomentDVELoggerImpl : NSObject <DVELoggerProtocol>

@property (retain, nonatomic) NSDictionary *serviceNameMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
