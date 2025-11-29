@class NSString;

@interface ActionBase : NSObject <NSCoding>

@property (nonatomic) int actionType;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) id actionItem;
@property (nonatomic) int showType;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *statId;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
