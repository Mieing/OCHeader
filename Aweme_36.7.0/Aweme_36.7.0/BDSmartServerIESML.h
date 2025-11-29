@class NSDictionary, NSString;

@interface BDSmartServerIESML : NSObject <BDSmartServerInterface>

@property (copy, nonatomic) NSDictionary *modelDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

@end
