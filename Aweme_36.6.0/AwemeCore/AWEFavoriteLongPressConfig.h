@class NSString, NSDictionary, AWEAwemeModel, UIView;
@protocol AWEInteractionElementLongPressProtocol;

@interface AWEFavoriteLongPressConfig : NSObject

@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIView *alignView;
@property (retain, nonatomic) UIView *interactionContainer;
@property (retain, nonatomic) id<AWEInteractionElementLongPressProtocol> longPressGestureManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *contextDict;
@property (nonatomic) BOOL isStatusChanged;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
