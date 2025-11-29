@class NSString;

@interface WCFinderJumpNativeTemplateSearchParams : NSObject

@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long bizType;
@property (retain, nonatomic) NSString *params;

- (id)customDict;
- (void).cxx_destruct;

@end
