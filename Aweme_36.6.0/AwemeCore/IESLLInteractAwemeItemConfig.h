@class NSString;

@interface IESLLInteractAwemeItemConfig : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *originItemID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
