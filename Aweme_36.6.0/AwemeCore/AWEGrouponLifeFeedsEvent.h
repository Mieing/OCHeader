@class NSString, NSArray;

@interface AWEGrouponLifeFeedsEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *actionsList;

+ (id)createEventInstanceWithData:(id)a0;

- (id)copyEvent;
- (void).cxx_destruct;
- (id)actionWithType:(id)a0;

@end
