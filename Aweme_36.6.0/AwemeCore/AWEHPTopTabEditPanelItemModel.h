@class NSString;

@interface AWEHPTopTabEditPanelItemModel : NSObject

@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long dragType;

- (BOOL)itemCanMove;
- (void).cxx_destruct;

@end
