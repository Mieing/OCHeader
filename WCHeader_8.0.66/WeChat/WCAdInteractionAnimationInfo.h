@class NSString;

@interface WCAdInteractionAnimationInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *resourceId;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) unsigned long long animationType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
