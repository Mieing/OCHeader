@class NSString;

@interface HTSLiveRoomFeatureValue : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long genTime;
@property (nonatomic) long long expTime;

+ (id)descriptor;

@end
