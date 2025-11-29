@class NSString;

@interface AWEVCDAuthorizeReportManager : HTSService <AWEVCDAuthorizeReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportBarShowAndUserInteractionIsRelationAuthorize:(BOOL)a0 isAlert:(BOOL)a1 actionType:(unsigned long long)a2 scene:(unsigned long long)a3;
+ (void)trackBarShowAndUserInteractionIsRelationAuthorize:(BOOL)a0 isAlert:(BOOL)a1 actionType:(unsigned long long)a2 scene:(unsigned long long)a3;
+ (void)reportBarShowAndUserInteraction:(unsigned long long)a0;
+ (void)trackBarShowAndUserInteractionIsRelationAuthorize:(BOOL)a0 isAlert:(BOOL)a1 actionType:(unsigned long long)a2 scene:(unsigned long long)a3 accountStatus:(unsigned long long)a4;
+ (id)eventNameForIsRelationAuthorize:(BOOL)a0 isAlert:(BOOL)a1 actionType:(unsigned long long)a2 scene:(unsigned long long)a3;
+ (id)enterFromString:(unsigned long long)a0;
+ (void)trackBarShowAndUserInteractionIsRelationAuthorize:(BOOL)a0 isAlert:(BOOL)a1 actionType:(unsigned long long)a2 enterFrom:(id)a3 accountStatus:(unsigned long long)a4;
+ (id)eventNameForInterConnect:(unsigned long long)a0 ActionType:(unsigned long long)a1;
+ (void)trackBarShowAndUserInteractionIsRelationAuthorize:(BOOL)a0 isAlert:(BOOL)a1 actionType:(unsigned long long)a2 enterFrom:(id)a3;
+ (void)trackInterConnectInterConnect:(unsigned long long)a0 actionType:(unsigned long long)a1 enterFrom:(id)a2;
+ (unsigned long long)accountStatus:(long long)a0;


@end
