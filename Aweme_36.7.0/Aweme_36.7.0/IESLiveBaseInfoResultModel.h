@class IESLiveBaseInfoRoomInfoModel, NSString, IESLiveBaseInfoAnchorInfoModel, IESLiveBaseInfoUserInfoModel;

@interface IESLiveBaseInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveBaseInfoUserInfoModel *userInfo;
@property (retain, nonatomic) IESLiveBaseInfoRoomInfoModel *roomInfo;
@property (retain, nonatomic) IESLiveBaseInfoAnchorInfoModel *anchorInfo;
@property (copy, nonatomic) NSString *startTime;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
