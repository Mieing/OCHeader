@class NSString, UIImage, UIColor;
@protocol IESIMContactPickerSectionSupplementModelContext;

@interface IESIMShareSelectionHeaderModel : NSObject <IESIMContactPickerContentSupplementaryModelProtocol>

@property (retain, nonatomic) NSString *headerTitle;
@property (nonatomic) long long entryType;
@property (readonly, copy, nonatomic) NSString *entryText;
@property (readonly, copy, nonatomic) UIImage *entryIcon;
@property (readonly, copy, nonatomic) UIColor *entryColor;
@property (copy, nonatomic) id /* block */ tapHeaderEntry;
@property (copy, nonatomic) id /* block */ createGroupCompletion;
@property (readonly, copy, nonatomic) NSString *elementKind;
@property (readonly, copy, nonatomic) NSString *reusableViewIdentifier;
@property (readonly, nonatomic) id<IESIMContactPickerSectionSupplementModelContext> context;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateBackgroundColor:(id)a0;

@end
