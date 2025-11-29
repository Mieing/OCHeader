@class NSString;

@interface KSCrashDoctorParam : NSObject

@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *previousClassName;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) BOOL isInstance;
@property (nonatomic) unsigned long long address;
@property (retain, nonatomic) NSString *value;

- (void).cxx_destruct;

@end
