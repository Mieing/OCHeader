@class NSString, NSArray;

@interface IESLLTempoVMEvent : NSObject

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSArray *eventParams;
@property (nonatomic) BOOL isSticky;

- (void).cxx_destruct;

@end
