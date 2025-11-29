@class NSString;

@interface WCAdTwistInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long twistStartTime;
@property (nonatomic) unsigned long long twistEndTime;
@property (nonatomic) unsigned long long coverStartTime;
@property (nonatomic) unsigned long long coverEndTime;
@property (nonatomic) unsigned long long twistDegree;
@property (nonatomic) BOOL clockwise;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL showSimpleTransition;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
