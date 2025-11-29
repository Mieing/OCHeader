@class NSString, NSDictionary, AWEAwemeModel;

@interface AWESearchCardFavorModel : NSObject

@property (nonatomic) BOOL hidden;
@property (nonatomic) long long favorCount;
@property (nonatomic) BOOL userFavored;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *adEventName;
@property (copy, nonatomic) NSDictionary *interactLogExtra;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } favorButtonFrame;

- (void).cxx_destruct;
- (id)init;

@end
