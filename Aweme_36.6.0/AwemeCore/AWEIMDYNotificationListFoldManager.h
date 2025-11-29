@class NSDictionary;

@interface AWEIMDYNotificationListFoldManager : NSObject

@property (copy, nonatomic) NSDictionary *expDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)isFoldExperimentEnable;
- (long long)threshouldForFoldNotice;
- (BOOL)shouldFoldForNoticeType:(id)a0;
- (id)enableFoldNoticeTypeArray;
- (unsigned long long)foldLabelExpType;
- (BOOL)shouldFoldForOfficalChatScene:(long long)a0;
- (double)heightForFoldLabelContainer;
- (double)heightForUnfoldLabelContainer;
- (double)foldLabelContainerTopOffset;
- (double)unfoldLabelContainerTopOffset;
- (id)foldTextWithNoticeName:(id)a0;
- (id)unfoldTextWithNoticeName:(id)a0;
- (id)lableBackgroundColor;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
