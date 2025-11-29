@class NSString, NSMutableDictionary, IESECDelayParam;

@interface IESECIntelligentPopMessage : GPBMessage

@property (nonatomic) int msgType;
@property (nonatomic) int bubbleType;
@property (nonatomic) long long promotionId;
@property (retain, nonatomic) IESECDelayParam *delayParam;
@property (nonatomic) BOOL hasDelayParam;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (readonly, nonatomic) unsigned long long params_Count;
@property (copy, nonatomic) NSString *listTopPath;
@property (copy, nonatomic) NSString *popPath;

+ (id)descriptor;

@end
