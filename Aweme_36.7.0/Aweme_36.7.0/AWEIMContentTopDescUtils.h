@interface AWEIMContentTopDescUtils : NSObject

+ (BOOL)shouldDisplayContentTopDesc:(id)a0;
+ (id)titleForMessage:(id)a0;
+ (BOOL)isMateApplyTextReply:(id)a0;
+ (BOOL)isLightCameraReply:(id)a0;
+ (BOOL)isMentionFeed:(id)a0;
+ (BOOL)isHistoryToday:(id)a0;
+ (BOOL)isGiphyMessageHaveTopDesc:(id)a0;
+ (BOOL)isGroupExchangeMessage:(id)a0;
+ (id)getNickNameWithMessage:(id)a0;
+ (BOOL)enableMatchWithGiphyMessage:(id)a0;
+ (id)schemaByReplacingPlaceHoldersInTitle:(id)a0 nickName:(id)a1;
+ (BOOL)isEnableReplaceTitleNickWithUid;

@end
