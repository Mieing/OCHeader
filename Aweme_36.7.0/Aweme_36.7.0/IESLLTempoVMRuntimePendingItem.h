@class NSString, NSArray;

@interface IESLLTempoVMRuntimePendingItem : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *params;
@property (retain, nonatomic) id extra;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
