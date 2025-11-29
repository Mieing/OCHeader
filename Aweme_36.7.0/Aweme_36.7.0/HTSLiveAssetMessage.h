@class GPBInt32Array, NSString, HTSLiveGiftMessage_TextEffect, NSDictionary, HTSLiveCommon, HTSLiveGiftIMPriority, HTSLiveUser, HTSLiveText;

@interface HTSLiveAssetMessage : IESLivePBBaseMessage

@property (nonatomic) double receiveTime;
@property (nonatomic) double downloadCompleteTime;
@property (retain, nonatomic) HTSLiveGiftMessage_TextEffect *textEffect;
@property (nonatomic) BOOL textEffectImageNeedCircle;
@property (nonatomic) long long bizType;
@property (retain, nonatomic) NSDictionary *mixInfo;
@property (nonatomic) BOOL needDisplayForce;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long assetId;
@property (retain, nonatomic) HTSLiveText *panelDisplayText;
@property (nonatomic) BOOL hasPanelDisplayText;
@property (nonatomic) BOOL showMessage;
@property (nonatomic) BOOL showPanel;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveUser *toUser;
@property (nonatomic) BOOL hasToUser;
@property (retain, nonatomic) HTSLiveGiftIMPriority *priority;
@property (nonatomic) BOOL hasPriority;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) int playPriority;
@property (retain, nonatomic) GPBInt32Array *requiredAssetsArray;
@property (readonly, nonatomic) unsigned long long requiredAssetsArray_Count;
@property (copy, nonatomic) NSString *diyItemInfo;
@property (copy, nonatomic) NSString *scene;

+ (id)descriptor;

@end
