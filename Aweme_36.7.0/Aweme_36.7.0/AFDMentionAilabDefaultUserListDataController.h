@class NSNumber, NSDictionary, NSString;

@interface AFDMentionAilabDefaultUserListDataController : NSObject <AFDMentionAilabDefaultUserListDataControllerProtocol>

@property (nonatomic) BOOL notFirstRequest;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
