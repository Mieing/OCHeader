@class NSString, NSDictionary, NSMutableArray, NSNumber;

@interface AWEFavoriteNewPopupViewContext : NSObject

@property (retain, nonatomic) NSMutableArray *itemIDArray;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *collectsIdFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL refreshItems;
@property (nonatomic) BOOL autoEnterCreateFolder;
@property (nonatomic) BOOL shouldBlockNoticeView;

- (void).cxx_destruct;

@end
