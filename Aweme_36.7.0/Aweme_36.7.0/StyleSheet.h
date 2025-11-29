@class NSString, Node;

@interface StyleSheet : NSObject

@property (retain, nonatomic) NSString *type;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) Node *ownerNode;
@property (retain, nonatomic) StyleSheet *parentStyleSheet;
@property (retain, nonatomic) NSString *href;
@property (retain, nonatomic) NSString *title;

- (void).cxx_destruct;

@end
