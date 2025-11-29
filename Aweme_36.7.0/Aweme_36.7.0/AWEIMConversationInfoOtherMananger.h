@interface AWEIMConversationInfoOtherMananger : NSObject

+ (void)fetchDataWithSource:(id)a0 conShortId:(id)a1 subscribers:(id)a2;
+ (void)fetchDataWithSource:(id)a0 conversationID:(id)a1 conShortId:(id)a2 conversationType:(unsigned long long)a3 subscribers:(id)a4;
+ (void)fetchDataWithSource:(id)a0 conversationID:(id)a1 conShortId:(id)a2 conversationType:(unsigned long long)a3 otherParams:(id)a4 subscribers:(id)a5;
+ (void)fetchDataWithSource:(id)a0 conversationID:(id)a1 conShortId:(id)a2 conversationType:(unsigned long long)a3 otherParams:(id)a4 complete:(id /* block */)a5;

@end
