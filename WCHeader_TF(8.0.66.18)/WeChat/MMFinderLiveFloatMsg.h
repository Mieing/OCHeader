@class MMFinderLiveFloatMsgDecorationInfo, MMFinderLiveFreeFloatMsgConfig;

@interface MMFinderLiveFloatMsg : NSObject

@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int usedCount;
@property (nonatomic) unsigned int sumCount;
@property (nonatomic) unsigned int priority;
@property (retain, nonatomic) MMFinderLiveFloatMsgDecorationInfo *decorationInfo;
@property (retain, nonatomic) MMFinderLiveFreeFloatMsgConfig *freeMsgConfig;

+ (id)createFinderLiveFloatMsgWithPBFloatMsg:(id)a0;
+ (unsigned int)transferLiveFloatMsgTypeToPBFloatMsgType:(unsigned int)a0;
+ (unsigned int)transferPBFloatMsgTypeToFinderLiveFloatMsgType:(unsigned int)a0;

- (BOOL)isLimitlessFloatMsg;
- (BOOL)hasReachUseLimit;
- (BOOL)increaseUsedCount;
- (id)guideWording;
- (id)getDecorationItemWithType:(unsigned int)a0;
- (void).cxx_destruct;

@end
