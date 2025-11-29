@class NSDictionary;

@interface TVLPacket : NSObject

@property (nonatomic) long long streamType;
@property (nonatomic) long long DTS;
@property (nonatomic) long long PTS;
@property (copy, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) BOOL containsKeyframe;

+ (id)packetWithInfo:(id)a0 error:(id *)a1;

- (id)streamTypeDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
