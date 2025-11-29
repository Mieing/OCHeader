@class NSString;

@interface TTAccountErrorCodeConfig : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *detail;

+ (id)build:(id)a0;

- (void).cxx_destruct;

@end
