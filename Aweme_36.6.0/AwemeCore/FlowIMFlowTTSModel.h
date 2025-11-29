@class NSString, NSArray, NSURL, _TtC7FlowIMX8FlowIcon, _TtC7FlowIMX23FlowTTSPreviewDataModel;

@interface FlowIMFlowTTSModel : NSObject {
    void /* unknown type, empty encoding */ _id;
    void /* unknown type, empty encoding */ _modelName;
    void /* unknown type, empty encoding */ _name;
    void /* unknown type, empty encoding */ _language;
    void /* unknown type, empty encoding */ _styleId;
    void /* unknown type, empty encoding */ _styleName;
    void /* unknown type, empty encoding */ _languageCode;
    void /* function */ styleIDPhoneCall;
    void /* function */ creatorId;
    void /* unknown type, empty encoding */ statusValue;
    void /* unknown type, empty encoding */ nameStatusValue;
    void /* unknown type, empty encoding */ privateStatusValue;
    void /* unknown type, empty encoding */ heatScore;
    void /* function */ displayHeatScore;
    void /* unknown type, empty encoding */ _isUgcVoice;
    void /* unknown type, empty encoding */ _createTime;
    void /* function */ localVoiceFile;
    void /* function */ creatorUsername;
    void /* function */ exclusiveBotIds;
    void /* unknown type, empty encoding */ tagList;
    void /* unknown type, empty encoding */ isBestMatch;
    void /* unknown type, empty encoding */ recByAlgo;
    void /* unknown type, empty encoding */ allowMix;
    void /* unknown type, empty encoding */ pitch;
    void /* unknown type, empty encoding */ speechRate;
    void /* function */ audioMetrics;
    void /* unknown type, empty encoding */ voiceConfStatusValue;
    void /* function */ extra;
    void /* unknown type, empty encoding */ mixVoiceList;
    void /* function */ requestFromWhichTab;
}

@property (class, nonatomic, readonly) NSString *mutedModelId;

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *modelName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *styleId;
@property (nonatomic, copy) NSString *styleName;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *styleIDPhoneCall;
@property (nonatomic, retain) _TtC7FlowIMX23FlowTTSPreviewDataModel *preview;
@property (nonatomic, copy) NSString *creatorId;
@property (nonatomic) long long status;
@property (nonatomic) long long nameStatus;
@property (nonatomic) long long privateStatus;
@property (nonatomic, copy) NSString *displayHeatScore;
@property (nonatomic) BOOL isUgcVoice;
@property (nonatomic) long long createTime;
@property (nonatomic, copy) NSURL *localVoiceFile;
@property (nonatomic, retain) _TtC7FlowIMX8FlowIcon *icon;
@property (nonatomic, copy) NSString *creatorUsername;
@property (nonatomic, copy) NSArray *exclusiveBotIds;
@property (nonatomic) BOOL isForceAddToList;
@property (nonatomic, copy) NSString *audioMetrics;
@property (nonatomic) long long voiceConfStatus;
@property (nonatomic, copy) NSString *extra;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic) BOOL isClientVoice;
@property (nonatomic, copy) NSString *requestFromWhichTab;

+ (id)mutedVoiceDataModelWithLanguageCode:(id)a0;
+ (id)mixedConfigVoiceViewModelWithStyleId:(id)a0 name:(id)a1;

- (void)updateTTSDataModelWithTtsModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
