@class NSString;

@interface IESIMRichTextLinkUserPieceModel : IESIMRichTextPieceModel

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUID;

- (id)initWithDisplayName:(id)a0 userID:(id)a1 secUID:(id)a2;
- (void).cxx_destruct;

@end
