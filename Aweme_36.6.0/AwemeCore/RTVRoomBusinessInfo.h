@class RTVRoomTextChatInfo, RTVEffectGameResponseData, RTVFeedSharingInfo;
@protocol Optional;

@interface RTVRoomBusinessInfo : JSONModel

@property (retain, nonatomic) RTVFeedSharingInfo<Optional> *sharingInfo;
@property (retain, nonatomic) RTVRoomTextChatInfo<Optional> *textChatInfo;
@property (retain, nonatomic) RTVEffectGameResponseData<Optional> *effectGameInfo;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
