@class NSString, NSMutableArray;

@interface DescendantStructV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *platformsArray;
@property (readonly, nonatomic) unsigned long long platformsArray_Count;
@property (copy, nonatomic) NSString *notifyMsg;
@property (nonatomic) BOOL hasNotifyMsg;

+ (id)descriptor;

@end
