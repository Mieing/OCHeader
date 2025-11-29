@class NSString;

@interface ChapterPointV2 : GPBMessage

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) BOOL hasDetail;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;

+ (id)descriptor;

@end
