@class NSMutableArray, BaseResponse;

@interface FinderLiveGetPrizeConfigPanelResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) unsigned int locationId;
@property (nonatomic) unsigned int dataVersion;

+ (void)initialize;

@end
