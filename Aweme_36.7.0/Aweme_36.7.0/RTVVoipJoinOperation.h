@class NSString, NSNumber, RTVVoipModel;

@interface RTVVoipJoinOperation : NSObject

@property (readonly, nonatomic) unsigned long long enterFrom;
@property (readonly, copy, nonatomic) NSString *notifyFrom;
@property (readonly, copy, nonatomic) NSString *sceneType;
@property (readonly, nonatomic) NSNumber *cameraOff;
@property (readonly, nonatomic) RTVVoipModel *voip;
@property (readonly, nonatomic) NSString *roomID;

- (id)initWithVoip:(id)a0 enterFrom:(unsigned long long)a1 notifyFrom:(id)a2 sceneType:(id)a3;
- (id)initWithVoip:(id)a0 enterFrom:(unsigned long long)a1 notifyFrom:(id)a2 sceneType:(id)a3 cameraOff:(id)a4;
- (void).cxx_destruct;

@end
