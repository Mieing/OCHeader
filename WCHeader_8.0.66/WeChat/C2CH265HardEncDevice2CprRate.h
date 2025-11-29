@class NSString;

@interface C2CH265HardEncDevice2CprRate : NSObject

@property (retain, nonatomic) NSString *device;
@property (nonatomic) int cprrate;
@property (nonatomic) int version;

- (id)desc;
- (BOOL)isMatchDevice;
- (BOOL)isiPhoneModelMatch:(int)a0;
- (void).cxx_destruct;

@end
