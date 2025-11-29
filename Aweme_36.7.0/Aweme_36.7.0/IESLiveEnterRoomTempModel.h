@class NSString, NSDictionary, NSNumber, IESLiveEnterRoomParamsModel;

@interface IESLiveEnterRoomTempModel : NSObject

@property (retain, nonatomic) NSDictionary *originParams;
@property (retain, nonatomic) IESLiveEnterRoomParamsModel *paramsModel;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *ownerID;
@property (retain, nonatomic) NSString *secOwnerID;
@property (retain, nonatomic) NSNumber *replayId;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) BOOL isReenter;
@property (retain, nonatomic) NSNumber *roomChannelInviteId;

- (id)initWithParams:(id)a0 originalURL:(id)a1;
- (void).cxx_destruct;

@end
