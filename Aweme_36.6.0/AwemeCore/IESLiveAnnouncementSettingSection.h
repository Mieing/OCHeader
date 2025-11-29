@class IESLiveAnnouncementSettingSectionHeader, NSArray;

@interface IESLiveAnnouncementSettingSection : NSObject

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) long long expandedType;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) IESLiveAnnouncementSettingSectionHeader *header;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) double minimumLineSpacing;

- (void).cxx_destruct;

@end
