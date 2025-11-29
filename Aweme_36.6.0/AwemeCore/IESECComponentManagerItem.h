@class NSArray, NSString;

@interface IESECComponentManagerItem : NSObject

@property (retain, nonatomic) id component;
@property (retain, nonatomic) NSArray *protocols;
@property (retain, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ didLoadBlock;
@property (copy, nonatomic) id /* block */ didUnloadBlock;
@property (nonatomic) BOOL hasUnload;

- (void).cxx_destruct;

@end
