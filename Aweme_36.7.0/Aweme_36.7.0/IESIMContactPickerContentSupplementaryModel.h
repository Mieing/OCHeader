@class UIColor, NSString;
@protocol IESIMContactPickerSectionSupplementModelContext;

@interface IESIMContactPickerContentSupplementaryModel : NSObject <IESIMContactPickerContentSupplementaryModelProtocol>

@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, copy, nonatomic) NSString *elementKind;
@property (readonly, copy, nonatomic) NSString *reusableViewIdentifier;
@property (readonly, nonatomic) id<IESIMContactPickerSectionSupplementModelContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateBackgroundColor:(id)a0;

@end
