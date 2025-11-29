@class NSString, AWENewPublishTableCell;

@interface AWEStudioMissionMatchModel : NSObject

@property (copy, nonatomic) NSString *titleContent;
@property (copy, nonatomic) NSString *subtitleContent;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *localIconName;
@property (nonatomic) unsigned long long sortType;
@property (retain, nonatomic) AWENewPublishTableCell *cell;

- (void).cxx_destruct;

@end
