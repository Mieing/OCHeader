@class NSString;

@interface CFIdStructV2 : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (nonatomic) int offset;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) int picCount;
@property (nonatomic) BOOL hasPicCount;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;

+ (id)descriptor;

@end
