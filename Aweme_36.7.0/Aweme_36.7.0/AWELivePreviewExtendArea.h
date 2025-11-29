@class NSString, NSArray, NSDictionary, AWELiveActionCfg, AWEURLModel;

@interface AWELivePreviewExtendArea : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL awe_isVSComponentType;
@property (retain, nonatomic) AWEURLModel *extendIcon;
@property (retain, nonatomic) NSString *extendPreText;
@property (retain, nonatomic) NSString *extendText;
@property (retain, nonatomic) NSString *extraBusiness;
@property (nonatomic) long long extendType;
@property (nonatomic) long long useMarquee;
@property (retain, nonatomic) NSString *extra;
@property (nonatomic) long long iconType;
@property (retain, nonatomic) NSArray *rightPartArray;
@property (copy, nonatomic) NSString *buttonPart;
@property (retain, nonatomic) NSArray *midPartArray;
@property (nonatomic) BOOL needDelimiter;
@property (nonatomic) long long uiType;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSArray *bottomPartArray;
@property (nonatomic) BOOL usePassThroughExtraJson;
@property (copy, nonatomic) NSString *passThroughExtraJson;
@property (nonatomic) long long clickableArea;
@property (retain, nonatomic) AWELiveActionCfg *actionCfg;
@property (retain, nonatomic) NSDictionary *extraEnterRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromOriginRoomModel:(id)a0 withOrigin:(id)a1;

- (void).cxx_destruct;

@end
