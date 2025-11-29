@class NSString;

@interface AEKTrackBindingStrategyImpl : NSObject <AEKTrackBindingStrategy>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long subjectType;
@property (copy, nonatomic) NSString *subjectId;
@property (nonatomic) unsigned long long bindingType;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL enableRepeatCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
