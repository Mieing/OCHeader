@class NSString, NSMutableArray;

@interface InteractCardStructV2 : GPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *bizInfo;
@property (nonatomic) BOOL hasBizInfo;
@property (copy, nonatomic) NSString *cardTitle;
@property (nonatomic) BOOL hasCardTitle;
@property (retain, nonatomic) NSMutableArray *wordsArray;
@property (readonly, nonatomic) unsigned long long wordsArray_Count;

+ (id)descriptor;

@end
