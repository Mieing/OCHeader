@class NSString, NSArray;

@interface IESLiveKTVTabStruct : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long count;
@property (nonatomic) BOOL needShowCount;
@property (nonatomic) long long type;
@property (nonatomic) BOOL needSort;
@property (copy, nonatomic) NSArray *sortArray;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL unReadShow;

- (void).cxx_destruct;

@end
