@class NSString, NSMutableArray;

@interface HTSLiveFeedbackEntrance : IESLivePBBaseMessage

@property (nonatomic) BOOL showEntrance;
@property (retain, nonatomic) NSMutableArray *feedbackTagListArray;
@property (readonly, nonatomic) unsigned long long feedbackTagListArray_Count;
@property (copy, nonatomic) NSString *helpdeskSchema;

+ (id)descriptor;

@end
