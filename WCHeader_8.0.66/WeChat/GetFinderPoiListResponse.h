@class NSData, NSMutableArray, BaseResponse;

@interface GetFinderPoiListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *poiInfoList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
