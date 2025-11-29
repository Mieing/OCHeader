@class NSString;

@interface IESECLivePlayerBizStainedTrackInfo : NSObject

@property (retain, nonatomic) NSString *bizDomain;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *useScene;

- (id)initWithBizDomain:(id)a0 identifier:(id)a1;
- (id)transformToLiveTrackInfo;
- (void).cxx_destruct;
- (id)init;

@end
