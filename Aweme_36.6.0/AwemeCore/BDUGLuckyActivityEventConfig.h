@class NSString, NSDictionary, NSArray;

@interface BDUGLuckyActivityEventConfig : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *matchRules;
@property (copy, nonatomic) NSArray *associatedGlobalTaskId;

- (void).cxx_destruct;

@end
