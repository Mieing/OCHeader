@class NSString;

@interface AWERecordNumberDOUYINAdapter : NSObject <AWERecordNumberAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)recordNumber;
- (id)weakTarget;

@end
