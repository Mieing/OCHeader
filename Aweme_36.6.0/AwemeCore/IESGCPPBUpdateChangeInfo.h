@class NSString, NSMutableArray;

@interface IESGCPPBUpdateChangeInfo : GPBMessage

@property (copy, nonatomic) NSString *changeTitle;
@property (retain, nonatomic) NSMutableArray *changeLogsArray;
@property (readonly, nonatomic) unsigned long long changeLogsArray_Count;

+ (id)descriptor;

@end
