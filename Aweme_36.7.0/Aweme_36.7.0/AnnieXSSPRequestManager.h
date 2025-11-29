@class NSString;

@interface AnnieXSSPRequestManager : NSObject <AnnieXSSPProtocol>

@property (copy, nonatomic) NSString *customDomin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;
+ (id)shareInstance;

@end
