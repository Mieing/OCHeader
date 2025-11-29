@class NSString;

@interface MMRegion : NSObject

@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *parentCode;
@property (nonatomic) int type;
@property (nonatomic) int numbersOfChildren;

- (id)description;
- (void).cxx_destruct;

@end
