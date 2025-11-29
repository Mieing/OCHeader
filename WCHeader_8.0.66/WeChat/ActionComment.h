@class NSString;

@interface ActionComment : NSObject <NSCoding>

@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *link;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
