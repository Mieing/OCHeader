@class NSString, NSArray;

@interface KSCrashDoctorFunctionCall : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *params;

- (id)descriptionForObjCCall;
- (id)descriptionWithParamCount:(int)a0;
- (void).cxx_destruct;

@end
