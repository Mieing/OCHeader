@class AWEIMMessage;

@interface AWEIMLocoalPendingSendMessage : NSObject

@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL insertIntoDB;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
