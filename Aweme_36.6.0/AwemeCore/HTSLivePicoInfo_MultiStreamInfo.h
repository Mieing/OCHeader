@class NSString, GPBStringInt64Dictionary;

@interface HTSLivePicoInfo_MultiStreamInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *multiStreamScene;
@property (retain, nonatomic) GPBStringInt64Dictionary *multiStreamDefaultViewAngle;
@property (readonly, nonatomic) unsigned long long multiStreamDefaultViewAngle_Count;
@property (retain, nonatomic) GPBStringInt64Dictionary *multiStreamType;
@property (readonly, nonatomic) unsigned long long multiStreamType_Count;

+ (id)descriptor;

@end
