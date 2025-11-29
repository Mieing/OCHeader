@class WNContentStorage, NSMutableArray, NSDate;

@interface WNContentOperationRecord : NSObject

@property (retain, nonatomic) NSDate *operationTime;
@property (retain, nonatomic) WNContentStorage *preContent;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } preRange;
@property (retain, nonatomic) NSMutableArray *preSessions;
@property (retain, nonatomic) WNContentStorage *nextContent;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } nextRange;
@property (retain, nonatomic) NSMutableArray *nextSessions;

- (void).cxx_destruct;

@end
