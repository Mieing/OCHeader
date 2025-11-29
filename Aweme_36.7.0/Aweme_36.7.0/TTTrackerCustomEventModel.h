@class NSString;

@interface TTTrackerCustomEventModel : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSString *trackID;
@property (copy, nonatomic) NSString *entireLog;
@property (copy, nonatomic) NSString *createdAt;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *region;

- (id)initWithTrackID:(id)a0 entireLog:(id)a1 createdAt:(id)a2 type:(id)a3 region:(id)a4;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
