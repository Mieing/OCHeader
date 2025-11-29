@class NSString, NSArray;

@interface LLDitoEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *actionsList;

+ (id)createEventInstanceWithData:(id)a0;

- (id)copyEvent;
- (void).cxx_destruct;
- (id)actionWithType:(id)a0;

@end
