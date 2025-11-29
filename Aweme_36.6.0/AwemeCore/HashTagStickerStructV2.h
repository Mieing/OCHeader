@class NSString;

@interface HashTagStickerStructV2 : GPBMessage

@property (copy, nonatomic) NSString *hashtagName;
@property (nonatomic) BOOL hasHashtagName;
@property (copy, nonatomic) NSString *hashtagId;
@property (nonatomic) BOOL hasHashtagId;
@property (copy, nonatomic) NSString *ugcSchema;
@property (nonatomic) BOOL hasUgcSchema;

+ (id)descriptor;

@end
