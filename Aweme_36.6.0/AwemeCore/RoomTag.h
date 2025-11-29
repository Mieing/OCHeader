@class NSString;

@interface RoomTag : IESLivePBBaseMessage

@property (nonatomic) long long tagId;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) float prob;
@property (nonatomic) long long level;

+ (id)descriptor;

@end
