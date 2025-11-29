@class NSString, NSMutableDictionary, NSMutableArray;

@interface GetFansclubHomepageResult_Data_ActivityCard : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *jumpSchema;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (retain, nonatomic) NSMutableArray *descListArray;
@property (readonly, nonatomic) unsigned long long descListArray_Count;
@property (retain, nonatomic) NSMutableArray *shortDescListArray;
@property (readonly, nonatomic) unsigned long long shortDescListArray_Count;

+ (id)descriptor;

@end
