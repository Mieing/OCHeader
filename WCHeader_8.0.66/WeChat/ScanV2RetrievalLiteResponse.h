@class NSString, NSMutableArray, BaseResponse;

@interface ScanV2RetrievalLiteResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) BOOL needPoi;
@property (retain, nonatomic) NSString *action;

+ (void)initialize;

@end
