@class NSString;

@interface ScanUrlItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *imageUrl;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
