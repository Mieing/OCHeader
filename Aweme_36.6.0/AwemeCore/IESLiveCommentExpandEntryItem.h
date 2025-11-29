@class UIImage, NSDictionary, NSString;
@protocol IESLiveCommentExpandHandlerProtocol;

@interface IESLiveCommentExpandEntryItem : NSObject

@property (nonatomic) BOOL showRedDot;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) UIImage *selectedItemImage;
@property (nonatomic) double priority;
@property (nonatomic) long long onlineVersion;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *detailViewConfig;
@property (nonatomic) unsigned long long entryType;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long compoundEntryType;
@property (nonatomic) BOOL isCompoundEntry;
@property (copy, nonatomic) NSString *disableToast;
@property (nonatomic) int dynamicEntryType;
@property (copy, nonatomic) id /* block */ onItemTapped;
@property (copy, nonatomic) id /* block */ onItemDeselected;
@property (copy, nonatomic) id /* block */ onItemShow;
@property (copy, nonatomic) id /* block */ onDisplay;
@property (copy, nonatomic) id /* block */ availableCheck;
@property (copy, nonatomic) id /* block */ unselectableCheck;
@property (copy, nonatomic) id /* block */ onOtherItemTapped;
@property (copy, nonatomic) id /* block */ detailViewForEntry;
@property (retain, nonatomic) id<IESLiveCommentExpandHandlerProtocol> actionHandler;

- (void).cxx_destruct;

@end
