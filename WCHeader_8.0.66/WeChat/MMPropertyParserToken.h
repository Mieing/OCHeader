@class NSString;

@interface MMPropertyParserToken : MMObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *getter;
@property (retain, nonatomic) NSString *setter;
@property (nonatomic) int attributes;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
