@class NSString, AWEURLModel;

@interface IESIMLinkCardURLAwemeVideoItem : NSObject

@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (copy, nonatomic) NSString *userNick;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userSecId;
@property (retain, nonatomic) AWEURLModel *userAvatar;

- (id)getInfoDict;
- (id)initWithInfoDict:(id)a0;
- (void).cxx_destruct;

@end
