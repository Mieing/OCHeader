@class NSString;

@interface ScanUserItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
