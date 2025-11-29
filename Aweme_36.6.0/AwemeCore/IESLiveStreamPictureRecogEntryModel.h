@class UIImage, NSString, NSMutableDictionary;

@interface IESLiveStreamPictureRecogEntryModel : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) int type;
@property (retain, nonatomic) UIImage *longPressEntryIcon;
@property (retain, nonatomic) UIImage *cleanScreenEntryIcon;
@property (copy, nonatomic) NSString *entryTitle;
@property (copy, nonatomic) id /* block */ shouldShowEntry;
@property (retain, nonatomic) NSMutableDictionary *eventParams;

- (void).cxx_destruct;

@end
