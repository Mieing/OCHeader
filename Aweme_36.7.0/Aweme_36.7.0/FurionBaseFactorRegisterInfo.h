@class NSString;

@interface FurionBaseFactorRegisterInfo : NSObject

@property (retain, nonatomic) NSString *factorName;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) unsigned long long factorType;
@property (retain, nonatomic) NSString *factorDesc;

- (void).cxx_destruct;

@end
