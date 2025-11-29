@class AnnouncementData;

@interface IESLiveAnnouncementModel : NSObject <IGListDiffable>

@property (retain, nonatomic) AnnouncementData *announcement;
@property (nonatomic) BOOL hideShareArea;
@property (nonatomic) BOOL hideMoreFunction;
@property (nonatomic) long long displayMode;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL cannotSelect;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
