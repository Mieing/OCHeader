@class NSString;

@interface ActionHeader : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *link;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
