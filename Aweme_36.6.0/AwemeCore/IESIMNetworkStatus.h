@class NSString;

@interface IESIMNetworkStatus : NSObject <IESIMNetworkStatus>

@property (nonatomic) long long networkType;
@property (nonatomic) long long networkSpeed;
@property (nonatomic) double lastUpdateAt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
