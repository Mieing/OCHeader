@class NSNumber;

@interface AWEFeedDislikeBaseInfoModel : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (copy, nonatomic) NSNumber *timerStamp;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
