@class MMFinderLiveFloatMsg, FinderWindowProductInfo;

@interface MMLiveInputCommitActionState : NSObject

@property (nonatomic) BOOL isCurrentForwardToFloatBarrage;
@property (retain, nonatomic) MMFinderLiveFloatMsg *floatMsgToUse;
@property (nonatomic) BOOL isCurrentForwardToProductQuestion;
@property (retain, nonatomic) FinderWindowProductInfo *questionProductInfo;

- (void).cxx_destruct;

@end
