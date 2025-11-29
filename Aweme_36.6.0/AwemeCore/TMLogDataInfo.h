@class NSString, NSDictionary;

@interface TMLogDataInfo : NSObject

@property (readonly, nonatomic) unsigned long long ts;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSDictionary *eventParams;
@property (readonly, copy, nonatomic) NSDictionary *extraContext;
@property (readonly, copy, nonatomic) NSString *dupFeature;
@property (readonly, nonatomic) BOOL isDup;

- (id)initWithEventName:(id)a0 eventParams:(id)a1 dupFeature:(id)a2 isDup:(BOOL)a3 extraContext:(id)a4;
- (void).cxx_destruct;

@end
