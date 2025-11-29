@interface BDPLinkListNode : NSObject

@property (retain, nonatomic) id data;
@property (retain, nonatomic) BDPLinkListNode *next;

- (void).cxx_destruct;

@end
