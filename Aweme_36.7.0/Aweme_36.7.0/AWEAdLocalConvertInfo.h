@class NSString;

@interface AWEAdLocalConvertInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *adConvertAppID;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) double feedBackDate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
