@class FansGroupInfoStruct;

@interface IESLiveAnnouncementFansGroupModel : NSObject

@property (retain, nonatomic) FansGroupInfoStruct *fansGroup;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void).cxx_destruct;

@end
