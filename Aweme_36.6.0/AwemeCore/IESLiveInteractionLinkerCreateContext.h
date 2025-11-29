@class NSString, NSDictionary, IESLiveLinkmicLinkAudienceCreateContext, IESLiveInteractionLayout, NSObject;
@protocol IESLiveRoomService;

@interface IESLiveInteractionLinkerCreateContext : NSObject <IESLiveInteractionLinkerCreateContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceCreateContext *linkmicContext;
@property (retain, nonatomic) IESLiveInteractionLayout *startLayout;
@property (copy, nonatomic) NSString *createSource;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long startType;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;

- (long long)maxMcNum;
- (id)playModesArray;
- (id)subRtcExtInfo;
- (id)clientUiInfo;
- (BOOL)isFirstInit;
- (unsigned long long)startScene;
- (long long)uiLayoutRawValue;
- (int)mappedUiLayout;
- (BOOL)didStartBeforeEnterRoom;
- (id)initWithLinkmicLinkAudienceCreateContext:(id)a0;
- (void).cxx_destruct;
- (id)functionType;
- (int)uiLayout;

@end
