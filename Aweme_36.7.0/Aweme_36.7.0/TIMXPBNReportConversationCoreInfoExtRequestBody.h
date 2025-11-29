@class NSMutableArray;

@interface TIMXPBNReportConversationCoreInfoExtRequestBody : GPBMessage

@property (nonatomic) long long convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (retain, nonatomic) NSMutableArray *extVersionArray;
@property (readonly, nonatomic) unsigned long long extVersionArray_Count;

+ (id)descriptor;

@end
