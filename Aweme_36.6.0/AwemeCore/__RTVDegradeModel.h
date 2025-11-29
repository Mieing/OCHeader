@interface __RTVDegradeModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isVideoDisable;
@property (readonly, nonatomic) BOOL isAudioDisable;
@property (readonly, nonatomic) double lastUpdateTimeInterval;

- (id)initWithVideoDisable:(BOOL)a0 audioDisable:(BOOL)a1;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
