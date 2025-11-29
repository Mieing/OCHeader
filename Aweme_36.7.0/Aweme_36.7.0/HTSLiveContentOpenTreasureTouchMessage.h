@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveContentOpenTreasureTouchMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;
@property (nonatomic) int eventType;
@property (copy, nonatomic) NSString *payload;

+ (id)descriptor;

@end
