@class NSString;

@interface BXStrategyModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *spaceId;
@property (copy, nonatomic) NSString *benchId;
@property (copy, nonatomic) NSString *dec;
@property (copy, nonatomic) NSString *owner;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) BOOL isSticky;
@property (nonatomic) BOOL isDynamic;
@property (retain, nonatomic) id strickyValue;

- (void).cxx_destruct;
- (id)init;

@end
