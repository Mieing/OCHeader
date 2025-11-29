@class NSDictionary;

@interface AWERLExtraAttributes : NSObject

@property (copy, nonatomic) NSDictionary *stateTitleDictionary;
@property (copy, nonatomic) NSDictionary *stateTitleColorDictionary;
@property (copy, nonatomic) NSDictionary *stateImageDictionary;
@property (copy, nonatomic) NSDictionary *eventActionDictionary;

+ (id)extraAttributesFromButton:(id)a0;

- (void)syncAttributesToButton:(id)a0 stateTitleDictionary:(id)a1 stateTitleColorDictionary:(id)a2 stateImageDictionary:(id)a3 eventActionDictionary:(id)a4;
- (void).cxx_destruct;

@end
