@class NSString;

@interface WCADAtFriendCompatible : NSObject <NSCoding>

@property (nonatomic) unsigned int minVersion;
@property (nonatomic) unsigned int maxVersion;
@property (retain, nonatomic) NSString *jumpUrl;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCompatible;
- (void).cxx_destruct;

@end
