@class UIImage, NSString;

@interface IESLiveAudienceScreenRecordShareItemModel : NSObject

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ clickAction;

- (void).cxx_destruct;

@end
