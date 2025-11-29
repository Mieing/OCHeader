@class NSString;

@interface WCSearchMinimizeData : NSObject <NSCoding>

@property (nonatomic) long long scene;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isHomePage;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *extParams;
@property (retain, nonatomic) NSString *navBarParams;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
