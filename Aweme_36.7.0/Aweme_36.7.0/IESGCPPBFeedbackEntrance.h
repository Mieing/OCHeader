@class NSString, NSMutableArray;

@interface IESGCPPBFeedbackEntrance : GPBMessage

@property (nonatomic) BOOL showEntrance;
@property (retain, nonatomic) NSMutableArray *feedbackTagListArray;
@property (readonly, nonatomic) unsigned long long feedbackTagListArray_Count;
@property (copy, nonatomic) NSString *helpdeskSchema;

+ (id)descriptor;

@end
