@class NSString;

@interface ACCAIGCLoraUpdateItem : NSObject

@property (copy, nonatomic) id /* block */ loraUpdateBlock;
@property (nonatomic) BOOL targetAppear;
@property (copy, nonatomic) NSString *loraIdentifier;

- (void).cxx_destruct;

@end
