@class RTVVoipExtBizInfo, RTVVoipCallInfo, RTVVoipRingToneModel, NSNumber, NSString, RTVRoomBusinessInfo, RTVVoipIndividualInfo;
@protocol Optional;

@interface RTVVoipInfo : NSObject

@property (retain, nonatomic) RTVVoipCallInfo *callInfo;
@property (retain, nonatomic) RTVVoipIndividualInfo *individualInfo;
@property (retain, nonatomic) RTVRoomBusinessInfo *businessInfo;
@property (retain, nonatomic) RTVVoipExtBizInfo *extBizInfo;
@property (retain, nonatomic) RTVVoipRingToneModel *peerUserRingtone;
@property (retain, nonatomic) NSNumber<Optional> *enterManner;
@property (nonatomic) BOOL isFromCache;
@property (copy, nonatomic) NSString *createToastMessage;

- (id)initWithCallInfo:(id)a0 individualInfo:(id)a1 businessInfo:(id)a2 extBizInfo:(id)a3 peerUserRingtone:(id)a4;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
