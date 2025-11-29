@class NSString;

@interface WCMomentsCompositorTabCellViewModel : NSObject

@property (copy, nonatomic) NSString *sectionId;
@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) BOOL isSelected;

- (id)initWithSectionId:(id)a0 sectionTitle:(id)a1;
- (void).cxx_destruct;

@end
