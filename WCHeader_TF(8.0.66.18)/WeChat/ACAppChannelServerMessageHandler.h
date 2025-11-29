@class NSString;

@interface ACAppChannelServerMessageHandler : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ syncHandlingBlock;
@property (copy, nonatomic) id /* block */ asyncHandlingBlock;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
