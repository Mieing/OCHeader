@class NSString, NSMutableDictionary, IESECDelayParam;

@interface IESECRequestInfo_Request : GPBMessage

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;
@property (retain, nonatomic) IESECDelayParam *delayParam;
@property (nonatomic) BOOL hasDelayParam;

+ (id)descriptor;

@end
