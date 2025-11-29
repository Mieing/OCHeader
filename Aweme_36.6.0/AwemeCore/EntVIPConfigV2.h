@class NSString;

@interface EntVIPConfigV2 : GPBMessage

@property (nonatomic) int vipType;
@property (nonatomic) BOOL hasVipType;
@property (nonatomic) BOOL hasPaid_p;
@property (nonatomic) BOOL hasHasPaid_p;
@property (nonatomic) long long productId;
@property (nonatomic) BOOL hasProductId;
@property (copy, nonatomic) NSString *buySchema;
@property (nonatomic) BOOL hasBuySchema;
@property (copy, nonatomic) NSString *librarySchema;
@property (nonatomic) BOOL hasLibrarySchema;

+ (id)descriptor;

@end
