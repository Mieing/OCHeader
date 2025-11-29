@class NSString, NSMutableArray;

@interface FeedFollowUpVisitData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *itemArray;
@property (readonly, nonatomic) unsigned long long itemArray_Count;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int visitType;
@property (copy, nonatomic) NSString *insertSchema;
@property (copy, nonatomic) NSString *insertTitle;
@property (nonatomic) long long moduleSource;
@property (copy, nonatomic) NSString *revisitType;

+ (id)descriptor;

@end
