@class HTSLiveCommon, HTSLiveShortTouchArea;

@interface HTSLiveShortTouchAreaMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int messageType;
@property (retain, nonatomic) HTSLiveShortTouchArea *shortTouchAreaData;
@property (nonatomic) BOOL hasShortTouchAreaData;

+ (id)descriptor;

@end
