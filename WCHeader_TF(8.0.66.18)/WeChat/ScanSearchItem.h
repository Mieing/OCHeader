@class NSString;

@interface ScanSearchItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *extInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
