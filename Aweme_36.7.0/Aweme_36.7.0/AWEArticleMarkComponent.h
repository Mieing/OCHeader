@class NSArray, NSString, AWEPlayInteractionBaseElement, AWEVideoTypeTagView;

@interface AWEArticleMarkComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) AWEVideoTypeTagView *markView;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;

@end
