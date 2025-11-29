@class NSString, NSDictionary;

@interface AWEFavoriteChainStartSnackBarConfig : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned long long snackBarType;
@property (copy, nonatomic) NSString *snackBarTitleString;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
