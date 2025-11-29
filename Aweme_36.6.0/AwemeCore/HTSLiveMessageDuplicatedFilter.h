@class NSString, NSMutableArray, IESLiveIMDuplicatedFilter;
@protocol IESLiveIMFilter;

@interface HTSLiveMessageDuplicatedFilter : NSObject <IESLiveIMFilter>

@property (retain, nonatomic) NSMutableArray *pointMessageIDs;
@property (retain, nonatomic) NSMutableArray *receivedMessageIDs;
@property (retain, nonatomic) NSMutableArray *channelPointMsgIDs;
@property (retain, nonatomic) NSMutableArray *channelMessageIDs;
@property (retain, nonatomic) IESLiveIMDuplicatedFilter *realFilter;
@property (nonatomic) BOOL useMessageTypeFilter;
@property (nonatomic) int maxMessageCount;
@property (retain, nonatomic) id<IESLiveIMFilter> nextFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doFilter:(id)a0;
- (void)setupStepRoomMessageIDs;
- (BOOL)disableFilter:(id)a0;
- (BOOL)judgeIfContainsMessageID:(id)a0 withArray:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
