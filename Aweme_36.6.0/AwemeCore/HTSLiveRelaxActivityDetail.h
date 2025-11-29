@class NSString, NSMutableDictionary;

@interface HTSLiveRelaxActivityDetail : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (readonly, nonatomic) unsigned long long trackParams_Count;

+ (id)descriptor;

@end
