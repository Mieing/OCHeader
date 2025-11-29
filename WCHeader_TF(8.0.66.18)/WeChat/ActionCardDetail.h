@class NSString;

@interface ActionCardDetail : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *digest;
@property (retain, nonatomic) NSString *iconurl;
@property (retain, nonatomic) NSString *cardid;
@property (retain, nonatomic) NSString *cardext;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
