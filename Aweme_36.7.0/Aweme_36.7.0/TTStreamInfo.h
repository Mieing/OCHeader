@class NSString;

@interface TTStreamInfo : NSObject

@property (nonatomic) long long streamType;
@property (nonatomic) long long streamIndex;
@property (copy, nonatomic) NSString *codecName;
@property (nonatomic) long long frameRate;
@property (nonatomic) long long bitRate;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channels;
@property (nonatomic) long long duration;
@property (nonatomic) long long rotation;

- (void).cxx_destruct;
- (id)init;

@end
