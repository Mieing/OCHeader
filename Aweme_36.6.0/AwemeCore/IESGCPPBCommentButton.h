@class NSString, NSMutableDictionary;

@interface IESGCPPBCommentButton : GPBMessage

@property (copy, nonatomic) NSString *commentEntrySchema;
@property (copy, nonatomic) NSString *evaluationDetailSchema;
@property (nonatomic) BOOL isComment;
@property (copy, nonatomic) NSString *evaluationId;
@property (retain, nonatomic) NSMutableDictionary *buttonConfigs;
@property (readonly, nonatomic) unsigned long long buttonConfigs_Count;
@property (copy, nonatomic) NSString *commentButtonSchema;

+ (id)descriptor;

@end
