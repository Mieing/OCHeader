@class NSString, NSArray;

@interface IESLatchPromiseDataNode : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSArray *pathArr;
@property (copy, nonatomic) id data;

- (void).cxx_destruct;

@end
