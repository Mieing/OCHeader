@class BoxShortTouchResponse_ResponseData;

@interface BoxShortTouchResponse : IESLivePBBaseMessage

@property (retain, nonatomic) BoxShortTouchResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
