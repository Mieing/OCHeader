@interface ForwardMsgUtil : MMObject

+ (void)ForwardMsgList:(id)a0 ToContact:(id)a1 Scene:(unsigned int)a2;
+ (void)ForwardMsg:(id)a0 ToContact:(id)a1 Scene:(unsigned int)a2;
+ (void)ForwardMsg:(id)a0 ToContact:(id)a1 Scene:(unsigned int)a2 forwardType:(unsigned int)a3;
+ (id)SendMsgWithOriMsg:(id)a0 Contact:(id)a1 ForwardType:(unsigned int)a2 EditImageAttr:(id)a3;
+ (void)ForwardMsg:(id)a0 ToContact:(id)a1 Scene:(unsigned int)a2 forwardType:(unsigned int)a3 uiIDKeyScene:(unsigned int)a4 editImageAttr:(id)a5;
+ (void)ForwardMsg:(id)a0 ToContact:(id)a1 Scene:(unsigned int)a2 forwardType:(unsigned int)a3 uiIDKeyScene:(unsigned int)a4 editImageAttr:(id)a5 roomTodoFlag:(BOOL)a6 inputText:(id)a7;
+ (void)ForwardMsg:(id)a0 ToContact:(id)a1 Scene:(unsigned int)a2 forwardType:(unsigned int)a3 uiIDKeyScene:(unsigned int)a4 editImageAttr:(id)a5 roomTodoFlag:(BOOL)a6 inputText:(id)a7 searchScene:(unsigned int)a8;
+ (void)forwardMsgMergeReportData:(id)a0 fromMsgWrap:(id)a1 inputText:(id)a2;
+ (id)GetMsgForbiddenBriefDesc:(id)a0;
+ (id)ConvertMsgToTextIfCannotSend:(id)a0;
+ (BOOL)IsMsgCanSend:(id)a0;
+ (id)getMsgRealFrom:(id)a0;
+ (id)getContactNickName:(id)a0;
+ (id)getContactHeadImage:(id)a0;
+ (id)GenForwardMsgFromMsgWrap:(id)a0 ToContact:(id)a1;
+ (void)copySecInfoFromMsg:(id)a0 toMsg:(id)a1;
+ (id)textMsgFromMsgWrap:(id)a0;
+ (id)GenTextMsgWithContent:(id)a0;
+ (id)imgMsgFromMsgWrap:(id)a0;
+ (id)appMsgFromMsgWrap:(id)a0;
+ (id)genForwardAppRecordItemFromMsg:(id)a0;
+ (id)checkSourcePathFileFromMsg:(id)a0 withDataList:(id)a1;
+ (id)emojiMsgFromMsgWrap:(id)a0;
+ (id)cardMsgFromMsgWrap:(id)a0;
+ (id)locMsgFromMsgWrap:(id)a0;
+ (id)readerAppMsgFromReaderWrap:(id)a0;
+ (id)GenForwardVideoFromMsgWrap:(id)a0;
+ (double)getTotalSize:(id)a0;
+ (id)getDataSizeDescription:(unsigned int)a0;
+ (void)StatForwardMultiMsgs:(id)a0 targets:(id)a1 scene:(unsigned long long)a2 didSend:(BOOL)a3 isRecord:(BOOL)a4 isToWeWork:(BOOL)a5 hasMessage:(BOOL)a6;
+ (unsigned int)ForwardStatSceneFrom:(unsigned long long)a0;
+ (id)GenerateClassifiedStatFromMsgList:(id)a0;
+ (BOOL)IsWeAppMsgWithMessageWrap:(id)a0;

@end
