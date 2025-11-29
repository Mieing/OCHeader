@class AWEECJumpTabInfo, NSString, AWEJumpToMallClientExtra, AWEJumpToMallConfigModel, AWEAwemeModel, AWEECBubbleInfo, NSDictionary;

@interface AWEECJumpToMallContextModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEJumpToMallConfigModel *grassConfig;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEJumpToMallClientExtra *clientExtra;
@property (nonatomic) double grassTime;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEECBubbleInfo *bubbleInfo;
@property (retain, nonatomic) NSDictionary *pitayaInfo;
@property (retain, nonatomic) AWEECJumpTabInfo *replaceJumpTabInfo;
@property (copy, nonatomic) NSString *triggerSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
