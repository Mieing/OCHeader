@class NSData;

@interface TPVideoSeiInfo : NSObject

@property (readonly, nonatomic) long long videoCodecType;
@property (readonly, nonatomic) long long videoSeiType;
@property (readonly, nonatomic) long long seiDataSize;
@property (readonly, nonatomic) NSData *seiData;

- (id)initWithCodecType:(long long)a0 seiType:(long long)a1 seiDataSize:(long long)a2 seiData:(id)a3;
- (void).cxx_destruct;

@end
