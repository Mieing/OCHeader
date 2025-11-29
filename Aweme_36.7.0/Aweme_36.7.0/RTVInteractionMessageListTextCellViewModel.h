@class NSString, NSAttributedString;

@interface RTVInteractionMessageListTextCellViewModel : RTVInteractionMessageListCellViewModel

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *identifier;

- (id)getInKey;
- (id)initWithAttributedString:(id)a0 senderID:(id)a1 identifier:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
