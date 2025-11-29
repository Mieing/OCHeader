@class NSArray, NSString, UILabel, AWEPlayInteractionBaseElement;

@interface AWEFeatureFilmTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) UILabel *featureFilmLabel;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;
+ (id)attributedStringWithFeatureFilmLabel:(id)a0;

@end
