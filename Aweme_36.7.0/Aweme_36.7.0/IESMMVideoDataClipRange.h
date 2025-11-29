@interface IESMMVideoDataClipRange : NSObject <NSCoding, NSCopying>

@property (nonatomic) double startSeconds;
@property (nonatomic) double durationSeconds;
@property (nonatomic) double attachSeconds;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL isDisable;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)endSeconds;

@end
