@class NSDictionary, IESGCPPBIntroduceCardDisplayInfo, NSString;

@interface IESGCPExplainCardDataModel : NSObject <IESGCPPropInfoModel>

@property (copy, nonatomic) NSDictionary *response;
@property (retain, nonatomic) IESGCPPBIntroduceCardDisplayInfo *displayConfig;
@property (nonatomic) long long fromType;
@property (nonatomic) long long locationType;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *typeString;
@property (readonly, nonatomic) double showDuration;
@property (readonly, copy, nonatomic) NSString *gameID;
@property (readonly, copy, nonatomic) NSDictionary *cardData;
@property (readonly, nonatomic) long long reserveStatus;
@property (readonly, nonatomic) BOOL isOpenAiIntroduceCard;
@property (readonly, copy, nonatomic) NSDictionary *initialData;
@property (readonly, copy, nonatomic) NSString *propId;
@property (readonly, copy, nonatomic) NSString *propName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxURL;
- (id)propInfo;
- (id)initWithResponse:(id)a0 fromType:(long long)a1 locationType:(long long)a2;
- (id)initWithInitialData:(id)a0;
- (void).cxx_destruct;

@end
