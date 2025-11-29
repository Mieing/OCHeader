@class NSString, NSArray;

@interface BDByteCastSinkDeviceInfo : BDByteCastDeviceInfo

@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *privateChannel;
@property (copy, nonatomic) NSString *googleSinkInfo;
@property (copy, nonatomic) NSString *cpu;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSArray *formats;
@property (copy, nonatomic) NSArray *supportedCodecs;
@property (nonatomic) long long port;
@property (nonatomic) long long portMirror;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;

- (void).cxx_destruct;
- (id)dictionary;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
