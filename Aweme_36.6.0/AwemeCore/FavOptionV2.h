@class NSString, NSMutableArray;

@interface FavOptionV2 : GPBMessage

@property (copy, nonatomic) NSString *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableArray *favElesArray;
@property (readonly, nonatomic) unsigned long long favElesArray_Count;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) int minMun;
@property (nonatomic) BOOL hasMinMun;
@property (nonatomic) int maxMun;
@property (nonatomic) BOOL hasMaxMun;

+ (id)descriptor;

@end
