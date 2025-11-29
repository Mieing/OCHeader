@class NSString;

@interface WARenderCacheContent : NSObject <PBCoding>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *webviewDataStr;
@property (copy, nonatomic) NSString *appserviceDataStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_webviewDataStr;
+ (void)PBArrayAdd_appserviceDataStr;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
