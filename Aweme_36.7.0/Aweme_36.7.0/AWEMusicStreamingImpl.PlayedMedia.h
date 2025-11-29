@class NSString;

@interface AWEMusicStreamingImpl.PlayedMedia : NSObject {
    void /* function */ mediaID;
    void /* function */ type;
}

@property (nonatomic) long long playedMills;
@property (nonatomic, copy) NSString *mediaID;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long duration;

- (id)initWithMedia:(id)a0 playedMills:(long long)a1 duration:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
