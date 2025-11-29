@class AWEAwemeModel, NSString, AWECoCreatorModel, AWEUserModel, AWEURLModel, AWELiveUserRoomData, AWECoCreatorExternModel, NSNumber;

@interface AWECoCreatorDetailCellModel : NSObject <AWECoCreatorCellProtocol>

@property (retain, nonatomic) AWECoCreatorExternModel *externModel;
@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerify;
@property (nonatomic) unsigned long long cellStyle;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *roleTitle;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secId;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (nonatomic) BOOL showFllowerCount;
@property (retain, nonatomic) NSNumber *followerCount;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWECoCreatorModel *coCreatorModel;
@property (readonly, nonatomic) AWELiveUserRoomData *roomDataInfo;
@property (readonly, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
