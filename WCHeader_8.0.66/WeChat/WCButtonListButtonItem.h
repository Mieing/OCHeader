@class NSString, MMUIButton;

@interface WCButtonListButtonItem : WCButtonListItem

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) MMUIButton *button;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
