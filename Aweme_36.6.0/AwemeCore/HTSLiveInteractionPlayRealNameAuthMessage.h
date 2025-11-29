@class NSString, HTSLiveCommon, HTSLiveInteractionPlayAuthEventParam, HTSLiveTwoElementAgreement;

@interface HTSLiveInteractionPlayRealNameAuthMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSString *clientKey;
@property (retain, nonatomic) HTSLiveTwoElementAgreement *twoElementAgreement;
@property (nonatomic) BOOL hasTwoElementAgreement;
@property (retain, nonatomic) HTSLiveInteractionPlayAuthEventParam *eventParam;
@property (nonatomic) BOOL hasEventParam;

+ (id)descriptor;

@end
