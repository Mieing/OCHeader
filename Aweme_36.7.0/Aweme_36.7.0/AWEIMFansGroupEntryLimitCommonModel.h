@class NSString, NSDictionary;

@interface AWEIMFansGroupEntryLimitCommonModel : NSObject

@property (copy, nonatomic) NSString *cid;
@property (nonatomic) BOOL immediatelyPushEntryLimitVC;
@property (copy, nonatomic) NSDictionary *selectedLimitDict;
@property (copy, nonatomic) NSDictionary *serverExtra;
@property (copy, nonatomic) NSDictionary *clientExtra;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;
- (id)init;

@end
