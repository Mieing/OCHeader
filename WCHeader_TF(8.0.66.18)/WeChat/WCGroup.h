@class NSString, NSMutableArray;

@interface WCGroup : NSObject <NSCoding>

@property (retain, nonatomic) NSString *gid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *memberList;

+ (BOOL)isFixedGroup:(id)a0;

- (id)init;
- (id)initWithSvrObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
