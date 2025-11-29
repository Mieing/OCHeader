@class NSString;

@interface RoomV4Tag : IESLivePBBaseMessage

@property (nonatomic) long long tagId;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) long long level;

+ (id)descriptor;

@end
