@class NSString;

@interface AWEPadUtilsInterfaceImp : NSObject <AWEPadUtilsInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)awe_padImageWithName:(id)a0;
- (long long)msIntervalFromDate:(id)a0 toDate:(id)a1;

@end
