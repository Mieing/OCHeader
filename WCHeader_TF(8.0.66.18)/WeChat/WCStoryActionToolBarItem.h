@class NSString;

@interface WCStoryActionToolBarItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) BOOL isDestructive;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
