@class NSString, NSDictionary;

@interface AWELifeFeedsAction : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *ditoParams;
@property (copy, nonatomic) id /* block */ customBlock;

+ (id)createActionWithData:(id)a0;

- (id)copyAction;
- (void).cxx_destruct;

@end
