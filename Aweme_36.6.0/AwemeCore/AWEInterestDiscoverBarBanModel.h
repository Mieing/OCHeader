@class NSNumber;

@interface AWEInterestDiscoverBarBanModel : NSObject <NSCoding, NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSNumber *showTime;
@property (retain, nonatomic) NSNumber *lastClickTimestamp;
@property (retain, nonatomic) NSNumber *lastShowTimestamp;
@property (retain, nonatomic) NSNumber *banTimestamp;

- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
