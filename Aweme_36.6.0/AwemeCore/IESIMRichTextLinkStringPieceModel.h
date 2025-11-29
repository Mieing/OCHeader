@class NSString, NSDictionary;

@interface IESIMRichTextLinkStringPieceModel : IESIMRichTextPieceModel

@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSDictionary *extra;

- (id)initWithText:(id)a0 action:(long long)a1 link:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
