@class NSString;

@interface FavReferMsgItem : FavoritesModel

@property (nonatomic) unsigned int type;
@property (nonatomic) long long svrId;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *referDesc;
@property (retain, nonatomic) NSString *content;

- (id)toMsgWrap;
- (void).cxx_destruct;

@end
