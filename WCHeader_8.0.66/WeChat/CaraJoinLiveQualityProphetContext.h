@class NSString;

@interface CaraJoinLiveQualityProphetContext : NSObject <CaraNativeJoinLiveQualityProphetContextBase>

@property (readonly, nonatomic) int videoQuality;
@property (readonly, nonatomic) int networkQuality;
@property (readonly, nonatomic) NSString *liveID;
@property (readonly, nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveID:(id)a0 videoQuality:(int)a1 networkQuality:(int)a2 scene:(int)a3;
- (id)zidl;
- (void).cxx_destruct;

@end
