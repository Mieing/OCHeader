@class NSArray, NSString, AWEPlayInteractionBaseElement, AWEVideoTypeTagView;

@interface AWESlidesTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) AWEVideoTypeTagView *slidesTagView;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needShowWithContext:(id)a0;
+ (BOOL)needShowSlidesTagViewWithModel:(id)a0;
+ (void)updateTagViewModel:(id)a0 withAwemeModel:(id)a1;

- (long long)tagWidth;
- (void)onRichAwemeTagClicked:(id)a0;
- (BOOL)currentTagNeedPlaceHolder;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
