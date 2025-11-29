@class NSString;

@interface WCPayLqbShowInfo : NSObject <NSCoding>

@property (nonatomic) BOOL isShowlqbEntry;
@property (nonatomic) BOOL isOpenlqb;
@property (retain, nonatomic) NSString *lqbOpenUrl;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
