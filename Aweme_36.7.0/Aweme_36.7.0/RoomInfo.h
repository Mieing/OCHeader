@class NSString;

@interface RoomInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *roomTitle;
@property (nonatomic) long long roomCreateTime;
@property (nonatomic) long long roomEndTime;

+ (id)descriptor;

@end
