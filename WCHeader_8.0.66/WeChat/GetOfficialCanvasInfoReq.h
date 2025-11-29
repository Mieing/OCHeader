@class NSString;

@interface GetOfficialCanvasInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *extBuffer;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;

+ (void)initialize;

@end
