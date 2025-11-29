@interface IESLiveInteractiveStreamProfile : NSObject

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long fps;
@property (nonatomic) unsigned long long biterate;
@property (nonatomic) unsigned long long videoProfile;
@property (nonatomic) long long streamVideoCodec;

- (void)updateWithVideoProfile:(unsigned long long)a0 enableH265:(BOOL)a1;
- (void)updateWithLiveStreamModel:(id)a0;
- (id)init;

@end
