@class NSString, NSMutableArray;

@interface StaticResourceStruct : GPBMessage

@property (retain, nonatomic) NSMutableArray *sharePictureArray;
@property (readonly, nonatomic) unsigned long long sharePictureArray_Count;
@property (copy, nonatomic) NSString *authorMonthlyLogo;
@property (nonatomic) BOOL hasAuthorMonthlyLogo;

+ (id)descriptor;

@end
