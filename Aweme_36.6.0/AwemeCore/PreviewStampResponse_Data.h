@class CustomizedCardInfo;

@interface PreviewStampResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) CustomizedCardInfo *cardInfo;
@property (nonatomic) BOOL hasCardInfo;

+ (id)descriptor;

@end
