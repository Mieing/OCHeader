@class NSString;

@interface AWEFollowListEntranceContentModel : NSObject

@property (nonatomic) BOOL show;
@property (nonatomic) BOOL showBorder;
@property (copy, nonatomic) NSString *descText;
@property (copy, nonatomic) NSString *entranceText;
@property (copy, nonatomic) id /* block */ onTapEntranceAction;
@property (copy, nonatomic) id /* block */ onTapDescLabelAction;
@property (copy, nonatomic) id /* block */ entranceShowAction;

- (void).cxx_destruct;

@end
