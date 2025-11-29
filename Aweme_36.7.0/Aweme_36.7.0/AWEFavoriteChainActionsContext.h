@class NSString, NSDictionary;

@interface AWEFavoriteChainActionsContext : AWEPageContext <AWEFavoriteChainActionsContextProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
