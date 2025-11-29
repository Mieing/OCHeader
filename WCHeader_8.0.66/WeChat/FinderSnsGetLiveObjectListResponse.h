@class FinderSnsGetLiveObjectListLayoutInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderSnsGetLiveObjectListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *liveObject;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderSnsGetLiveObjectListLayoutInfo *layoutInfo;
@property (retain, nonatomic) NSMutableArray *divider;
@property (nonatomic) BOOL enableSetting;

+ (void)initialize;

@end
