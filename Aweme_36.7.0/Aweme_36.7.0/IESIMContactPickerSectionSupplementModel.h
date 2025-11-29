@class NSString, NSMutableAttributedString, UIColor;
@protocol IESIMContactPickerSectionSupplementModelContext;

@interface IESIMContactPickerSectionSupplementModel : NSObject <IESIMContactPickerContentSupplementaryModelProtocol>

@property (copy, nonatomic) NSString *elementKind;
@property (copy, nonatomic) NSString *reusableViewIdentifier;
@property (copy, nonatomic) NSString *titleString;
@property (retain, nonatomic) NSMutableAttributedString *attrTitleString;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double topInset;
@property (retain, nonatomic) id<IESIMContactPickerSectionSupplementModelContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAttrTitleString:(id)a0;
- (id)initWithElementKind:(id)a0 reusableViewIdentifier:(id)a1 titleString:(id)a2;
- (void)updateTopInset:(double)a0;
- (void).cxx_destruct;
- (void)updateBackgroundColor:(id)a0;
- (void)updateContext:(id)a0;

@end
