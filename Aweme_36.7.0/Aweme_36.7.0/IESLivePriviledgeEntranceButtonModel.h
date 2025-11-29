@class HTSLiveText, NSString, LightInfo, HTSLiveFlexImageStruct, DynamicInfo, NSMutableDictionary;

@interface IESLivePriviledgeEntranceButtonModel : NSObject

@property (copy, nonatomic) NSString *panelURL;
@property (nonatomic) long long metaID;
@property (retain, nonatomic) HTSLiveText *text;
@property (retain, nonatomic) HTSLiveText *bubbleText;
@property (retain, nonatomic) HTSLiveFlexImageStruct *bubbleBackgroundImg;
@property (copy, nonatomic) NSString *bubbleURL;
@property (retain, nonatomic) HTSLiveText *awardTips;
@property (retain, nonatomic) LightInfo *lightInfo;
@property (retain, nonatomic) DynamicInfo *dynamicInfo;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (nonatomic) BOOL disableTip;

- (id)translateRichTextToText:(id)a0;
- (id)translateToFlexImageStruct:(id)a0;
- (id)translateToLightInfo:(id)a0;
- (id)translateToDynamicInfo:(id)a0;
- (void)updateEntranceButtonModelUseEntranceDetail:(id)a0;
- (void).cxx_destruct;

@end
