@interface IESIMShareDescTitleService : NSObject

+ (void)fetchIMModelDescAttributedTitleWithShareModel:(id)a0 flameFont:(id)a1 flameSize:(struct CGSize { double x0; double x1; })a2 spacing:(double)a3 needOnlineTextTail:(BOOL)a4 attrStringMaxWidth:(double)a5 defaultAttrs:(id)a6 imStreakDisplayManager:(id)a7 disableFetch:(BOOL)a8 completion:(id /* block */)a9;
+ (void)fetchIMModelDescItemArrayWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)acquireUserActiveWithTranspondList:(id)a0 completion:(id /* block */)a1;
+ (id)getSubtitleAttributesWithUIConfig:(id)a0;
+ (void)fetchConversationWithShareModel:(id)a0 completion:(id /* block */)a1;
+ (id)p_redPacketAttrStrWithImage:(id)a0 font:(id)a1 attachmentHeight:(double)a2 spacing:(double)a3;

@end
