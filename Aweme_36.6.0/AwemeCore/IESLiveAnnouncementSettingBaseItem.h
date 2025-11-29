@class NSString;

@interface IESLiveAnnouncementSettingBaseItem : NSObject

@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) double cellHeight;
@property (readonly, nonatomic) double cellHorizontalMargin;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ didTapped;

- (void).cxx_destruct;
- (id)init;

@end
