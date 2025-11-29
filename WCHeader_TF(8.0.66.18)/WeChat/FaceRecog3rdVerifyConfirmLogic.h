@class UIColor, NSString, NSDictionary, NSMutableArray;
@protocol FaceRecog3rdVerifyConfirmLogicDelegate;

@interface FaceRecog3rdVerifyConfirmLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<FaceRecog3rdVerifyConfirmLogicDelegate> delegate;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSMutableArray *confirmInfos;
@property (retain, nonatomic) NSDictionary *prompts;
@property (retain, nonatomic) NSString *bizNickName;
@property (retain, nonatomic) NSString *headerPromptWording;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (retain, nonatomic) NSString *feedbackUrlForConfirmView;
@property (retain, nonatomic) NSString *businessTip;
@property (retain, nonatomic) UIColor *businessTipColor;
@property (retain, nonatomic) NSString *businessHeadUrl;
@property (nonatomic) unsigned int checkAliveType;
@property (nonatomic) BOOL bDefaultConfirm;
@property (nonatomic) float lightThreshold;
@property (nonatomic) double faceFrameRatio;
@property (retain, nonatomic) NSString *verifyResult;
@property (nonatomic) unsigned int identifyType;
@property (retain, nonatomic) NSString *overseaDesc;
@property (retain, nonatomic) NSString *overseaAgreement;

- (void)resetLogicState;
- (BOOL)startGetConfirmInfo:(id)a0 verifyInfo:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetConfirmInfo:(id)a0;
- (void).cxx_destruct;

@end
