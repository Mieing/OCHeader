@class NSString;

@interface WCFinderCommentHeatUpContactCellViewModel : NSObject

@property (retain, nonatomic) NSString *urlKey;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) BOOL displayAvator;
@property (nonatomic) BOOL isSelf;

- (id)initWithPromotionInfo:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
