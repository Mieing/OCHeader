@class NSDictionary, NSString;

@interface AWEPOIPublishPageSchemaDiffManager : NSObject <AWEPOIPublishSchemaDiffProtocol>

@property (copy, nonatomic) NSDictionary *inSchemaParams;
@property (copy, nonatomic) NSDictionary *outSchemaParams;
@property (copy, nonatomic) NSString *business;
@property (copy, nonatomic) NSString *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateBusiness:(id)a0 inSchemaParams:(id)a1;
- (void)updateOutSchemaParams:(id)a0;
- (void)trackSchemaDiff:(id)a0;
- (id)trackParamKeys;
- (id)securityAuditTrackParamKeys;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
