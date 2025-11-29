@class IESLiveGiftAIClientResortInfoModel, NSArray, IESLiveGiftAssemblyCustomizedCardConfig, IESLiveGiveGiftSeriesInfo, NSDictionary, NextSendParams, IESLiveGiftSendInterceptTracker, NSNumber;

@interface IESLiveGiveGiftConfiguration : NSObject

@property (retain, nonatomic) id gift;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL isCombo;
@property (retain, nonatomic) NSArray *toUsers;
@property (nonatomic) long long sendType;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isParallel;
@property (copy, nonatomic) NSDictionary *extraTrack;
@property (nonatomic) BOOL isFromJSB;
@property (retain, nonatomic) IESLiveGiftAssemblyCustomizedCardConfig *customizedCardConfig;
@property (nonatomic) long long selectedCustomizedCardIndex;
@property (retain, nonatomic) IESLiveGiftAssemblyCustomizedCardConfig *sendCardConfig;
@property (nonatomic) BOOL allMic;
@property (retain, nonatomic) NSNumber *sendScene;
@property (nonatomic) BOOL sendToIndependentAnchor;
@property (nonatomic) double giftPanelViewShowTime;
@property (retain, nonatomic) NextSendParams *nextSendParams;
@property (retain, nonatomic) IESLiveGiveGiftSeriesInfo *seriesInfo;
@property (nonatomic) BOOL isFirstScreen;
@property (nonatomic) BOOL isDefaultSelectedGift;
@property (retain, nonatomic) NSNumber *buffLevel;
@property (retain, nonatomic) IESLiveGiftAIClientResortInfoModel *aiResortInfo;
@property (retain, nonatomic) IESLiveGiftSendInterceptTracker *interceptTracker;

- (void).cxx_destruct;
- (id)init;

@end
