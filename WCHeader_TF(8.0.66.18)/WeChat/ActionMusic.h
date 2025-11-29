@class NSString;

@interface ActionMusic : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *wifiUrl;
@property (retain, nonatomic) NSString *wapUrl;
@property (retain, nonatomic) NSString *webUrl;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
