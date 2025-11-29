@class NSString, NSArray, IESLivePublicScreenCommonMessageParser, IESLivePublicScreenRefreshConfig;
@protocol IESLiveRoomService;

@interface IESLivePublicScreenDataFlowConfig : NSObject

@property (retain, nonatomic) IESLivePublicScreenCommonMessageParser *messageParser;
@property (copy, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) double memberEnterIntervalMS;
@property (nonatomic) double likeMessageIntervalMS;
@property (nonatomic) long long currentPublicScreenHeat;
@property (copy, nonatomic) id /* block */ filterMessage;
@property (copy, nonatomic) id /* block */ preprocessMessage;
@property (copy, nonatomic) id /* block */ filterNode;
@property (copy, nonatomic) id /* block */ preprocessNode;
@property (copy, nonatomic) id /* block */ setupStrategy;
@property (copy, nonatomic) id /* block */ customNodeStrategy;
@property (copy, nonatomic) NSArray *subscribeMessageClass;
@property (nonatomic) long long refreshBufferMaxCount;
@property (retain, nonatomic) IESLivePublicScreenRefreshConfig *refreshConfig;
@property (nonatomic) BOOL enableDirectlyShowMessageOpt;

- (id)initWithDIContext:(id)a0;
- (void)setupMessageFrequencyConfig:(id)a0;
- (void).cxx_destruct;

@end
