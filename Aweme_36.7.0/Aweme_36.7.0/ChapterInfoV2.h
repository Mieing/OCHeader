@class NSString, NSMutableArray;

@interface ChapterInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *keyWord;
@property (nonatomic) BOOL hasKeyWord;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (nonatomic) int timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int ecomWord;
@property (nonatomic) BOOL hasEcomWord;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) BOOL hasURL;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) BOOL hasDetail;
@property (retain, nonatomic) NSMutableArray *pointsArray;
@property (readonly, nonatomic) unsigned long long pointsArray_Count;

+ (id)descriptor;

@end
