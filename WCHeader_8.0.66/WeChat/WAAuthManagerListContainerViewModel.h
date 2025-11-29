@class NSArray, WAContact, WAAuthManagerSectionViewModel;

@interface WAAuthManagerListContainerViewModel : NSObject

@property (nonatomic) double viewHeight;
@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) WAAuthManagerSectionViewModel *weappUserInfoViewModel;
@property (retain, nonatomic) NSArray *arrPluginUserInfoViewModel;

- (void).cxx_destruct;

@end
