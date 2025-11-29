@class NSString;

@interface AWEIMEmojiRecommendManager : NSObject <IESIMEmojiRecommendProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (id)frequencyControlModel;
+ (BOOL)canShowEmojiRecommendPopupView;
+ (void)showEmojiRecommendPopupView;
+ (void)showEmojiRecommendPopupViewWithCloseBlock:(id /* block */)a0;
+ (BOOL)isEmojiRecommendPopupViewShowing;

- (BOOL)hasShowEmojiRecommendPopupView;
- (BOOL)hasShowEmojiRecommendPopUpViewServerRecord;

@end
