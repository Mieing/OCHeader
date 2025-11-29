@class NSString;

@interface ActionMedia : NSObject <NSCoding>

@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *link;
@property (nonatomic) int showInWeb;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
