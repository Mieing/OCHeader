@class NSString;

@interface FavEleV2 : GPBMessage

@property (nonatomic) int id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *serverExtra;
@property (nonatomic) BOOL hasServerExtra;
@property (copy, nonatomic) NSString *enName;
@property (nonatomic) BOOL hasEnName;

+ (id)descriptor;

@end
