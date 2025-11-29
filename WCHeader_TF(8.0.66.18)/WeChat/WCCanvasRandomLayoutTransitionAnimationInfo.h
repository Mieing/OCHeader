@class NSString;

@interface WCCanvasRandomLayoutTransitionAnimationInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *fileMD5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
