@class NSString;

@interface VcardName : NSObject

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *middleName;
@property (retain, nonatomic) NSString *lastName;

+ (BOOL)isValidName:(id)a0;
+ (BOOL)isChineseName:(id)a0;

- (void)print;
- (void).cxx_destruct;

@end
