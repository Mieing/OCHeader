@class NSString, NSMutableDictionary;

@interface HTSLiveRoomFeatureMessage : IESLivePBBaseMessage

@property (nonatomic) long long anchorId;
@property (copy, nonatomic) NSString *pushType;
@property (retain, nonatomic) NSMutableDictionary *featureMap;
@property (readonly, nonatomic) unsigned long long featureMap_Count;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
