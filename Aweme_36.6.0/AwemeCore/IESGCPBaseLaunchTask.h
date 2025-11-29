@class NSString;

@interface IESGCPBaseLaunchTask : NSObject <IESGCPLaunchTaskProtocol>

@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excute;
- (void).cxx_destruct;

@end
