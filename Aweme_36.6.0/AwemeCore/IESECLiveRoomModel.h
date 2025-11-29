@class NSString, IESECURLModel;

@interface IESECLiveRoomModel : NSObject

@property (retain, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSString *ownerUserID;
@property (retain, nonatomic) IESECURLModel *roomCoverURL;

- (void).cxx_destruct;

@end
