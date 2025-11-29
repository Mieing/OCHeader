@interface AWEIMCommonUtil : NSObject

+ (double)awe_currentServerTime;
+ (double)currentServerTime;
+ (id)colorFromRGBOrARGBString:(id)a0 defaultColor:(id)a1;
+ (void)makeLightVibrate;
+ (BOOL)isSameDayWithDate1:(id)a0 date2:(id)a1;
+ (long long)daysBetweenFromDate:(id)a0 toDate:(id)a1;
+ (id)attachmentOjectWithImage:(id)a0;
+ (id)currentNetType;
+ (void)makeVibrateWithStyle:(long long)a0;
+ (BOOL)groupInteractiveCheckWithIESConversation:(id)a0 showToast:(BOOL)a1;
+ (double)currentServerTimeMS;
+ (BOOL)isSameStringWithFirstString:(id)a0 andSecondString:(id)a1;
+ (void)performAsyncActionWithTimeOutInterval:(double)a0 asyncAction:(id /* block */)a1 timeOutBlock:(id /* block */)a2;
+ (BOOL)groupOperationAvailableCheckWithIESConversation:(id)a0 showToast:(BOOL)a1;
+ (id)queryURLString:(id)a0 queryKey:(id)a1;
+ (id)attributedStringWithPrefix:(id)a0 suffix:(id)a1 attributes:(id)a2 maximumWidth:(double)a3 maximumNumberOfLines:(unsigned long long)a4;
+ (id)chineseStartDayOfDate:(id)a0;
+ (id)emoticonModelFromStickerModel:(id)a0;
+ (id)transferToTwoDecimalMoney:(id)a0;
+ (id)chineseTimeZoneCalendar;
+ (id)im_safeURLArrayWitURL:(id)a0;
+ (id)im_safeURL:(id)a0;
+ (BOOL)isTapGestureRecognizedWhenScroll:(id)a0 gestureResponseView:(id)a1 otherGestureRecognizer:(id)a2 tableViewPanGestureRecognizer:(id)a3;
+ (id)boeSuffix;
+ (BOOL)shouldShowRecallMenuItemWithMessage:(id)a0 conversation:(id)a1;
+ (BOOL)canSendGiphyWithConversation:(id)a0;
+ (BOOL)canShowEditOnMessage:(id)a0 conversation:(id)a1;
+ (id)getMessageUneditable:(id)a0;
+ (void)setMessageUneditable:(id)a0 uniqueId:(id)a1;
+ (double)imock_currentServerTime;
+ (BOOL)canSendGiphyWithConversation:(id)a0 stickerType:(unsigned long long)a1;
+ (BOOL)isDataSourceNotEqual:(id)a0 groups:(id)a1;
+ (BOOL)groupBlockedOrCurrentUserBlockedcheckWithIESConversation:(id)a0 showToast:(BOOL)a1;
+ (id)commonUnsupportMessageContentDict;
+ (BOOL)canSendGiphyWithConversation:(id)a0 peerUser:(id)a1 isAuthorService:(BOOL)a2;
+ (unsigned long long)mutableAttributedString:(id)a0 replaceOccurrencesOfString:(id)a1 withAttributedString:(id)a2 options:(unsigned long long)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (long long)hoursBetweenFromDate:(id)a0 toDate:(id)a1;
+ (id)commonUnsupportMessageContentDictWithMessageType:(long long)a0;
+ (unsigned int)uint32FromColor:(id)a0;
+ (void)registerActivityDataCacheWithDomain:(id)a0 memorySizeLimit:(unsigned long long)a1 diskSizeLimit:(unsigned long long)a2 expireDate:(long long)a3;

@end
