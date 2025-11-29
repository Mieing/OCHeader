@class AWEIMMessage, NSMutableDictionary, NSString, AWEURLModel;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardPOIImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (retain, nonatomic) AWEURLModel *mapImageURL;
@property (retain, nonatomic) NSMutableDictionary *sendMultiMessageDict;
@property (nonatomic) BOOL forbidToast;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;
@property (retain, nonatomic) AWEIMMessage *forwardMessage;
@property (copy, nonatomic) NSString *accessoryText;
@property (copy, nonatomic) NSString *createGroupEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraTrackInfo;
- (id)businessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (void)clearBusinessModelFromIMSetting;
- (void)configShareBottomInputViewWithCoverImageView:(id)a0;
- (void)configShareAlertTopView:(id)a0 withCoverImageView:(id)a1 contentLabel:(id)a2;
- (id)shareMessage;
- (id)messageTypeForShareTrack;
- (void)willTransferToShareListVC:(id)a0;
- (void)didSelectShareUser:(id)a0 inVC:(id)a1;
- (void)performAyncTaskBeforeShareToShareUserList:(id)a0 asynPerformBlock:(id /* block */)a1;
- (void)didShareToShareUserList:(id)a0;
- (id)multiShareImps;
- (id)poiInfoModel;
- (void).cxx_destruct;

@end
