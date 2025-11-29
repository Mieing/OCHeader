@interface UploaderTracker : NSObject

@property (nonatomic) long long realUploadLength;
@property (nonatomic) long long subCode;
@property (nonatomic) long long totalLength;
@property (nonatomic) double netTotalDuration;
@property (nonatomic) BOOL isBackground;

- (id)initWithParam:(long long)a0 totalLength:(long long)a1 netTotalDuration:(double)a2 subCode:(long long)a3;
- (void)updateIsBackground:(BOOL)a0;

@end
