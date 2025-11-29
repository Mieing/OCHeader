@class AWECaptionInfoModel;

@interface AWEHPSearchCaptionMsgManager : NSObject

@property (retain, nonatomic) AWECaptionInfoModel *latestCaptionMsg;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)registerCaptionMsgSync;
- (int)captionMsgBusinessID;
- (void)handleNewMsg:(id)a0;
- (void)clearMsg:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
